using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using System;

#if UNITY_EDITOR
using UnityEditor;



[ExecuteInEditMode]
public class TM_ChangeMesh : EditorWindow
{
    private bool addFlowers;
    private int variety = 1, flowerVariety = 1, leafMaterial = 1, age = 1, trunk = 1, roots = 0, ivy = 0, ivyVariety = 1, vines = 0, vineVariety = 1, bark = 1, lichen = 0;
    private int varietyOld = 0, leavesOld = 1, ageOld = 1, trunkOld = 1, rootsOld = 0, ivyOld = 0, ivyVarietyOld = 1, vinesOld = 0, vineVarietyOld = 1, barkOld = 1, lichenOld = 0;


    static string trunkStarter = "T!K_t01_b01_l00_r00";
    static string extrasStarter = "T!X_i00_l01_v00_k01";



    ///<summary>T!K_t01_b01_l01_r01 </summary>
    string trunkString = trunkStarter;//trunk, bark, lichen, roots

    ///<summary>T!X_i01_l01_v01_k01 </summary>
    string extrasString = extrasStarter;//ivy mesh, ivy look, vine mesh, vine look


    string newTrunkMeshName = trunkStarter;
    string newExtraMeshName = extrasStarter;
    private float leafScale = 1, oldLeafScale = 1;
    private float flowerScale = 1, oldFlowerScale = 1;
    private float trunkScale = 1, oldTrunkScale = 1;
    private float trunkRotation = 1, oldTrunkRotation = 1;
    private float ivyScale = 1, oldIvyScale = 1;
    private float vineScale = 1, oldVineScale = 1;


    int trunkLichenOptions = 3;
    int trunkRootOptions = 3;
    float trunkMaxScale = 5f;

    int foliageVarietyOptions = 64;
    float foliageMaxScale = 2f;
    float flowersMaxScale = 2f;

    int extraIvyOptions = 4;
    int extraIvyVarietyOptions = 4;
    int extraVineOptions = 4;
    int extraVineyVarietyOptions = 4;
    float extraMaxScale = 5f;
    GameObject prefabtoSwap;

    Vector2 scrollPos;
    private string nameToSearch;
    private bool addRoots;
    private float rootScale;
    private float rootsRotation, oldRootsRotation;
    private int rootsVariety, oldRootsVariety;

    private string newName = System.String.Empty;
    private string tempName = "TM_Tree_";
    private List<GameObject> childrenOfTree = new List<GameObject>();

    string placeholder = string.Empty;



    public static void ShowWindow()
    {
        EditorWindow editorWindow = EditorWindow.GetWindow(typeof(TM_ChangeMesh));
        editorWindow.autoRepaintOnSceneChange = true;
        editorWindow.Show();
        editorWindow.titleContent = new GUIContent("Change Mesh");

    }

    string[] branchTypes = new string[] { "TM_Trunk", "ABranch", "CBranch", "DBranch", "GBranch", "KBranch", "MBranch", "PBranch", "RWBranch", "SBranch", "Thin_Branch" };

    int[] branchOptionCount = new int[] { 19, 8, 7, 3, 9, 6, 7, 6, 8, 8, 7 };

    int selectionMesh = 0;
    void OnGUI()
    {
        scrollPos = GUILayout.BeginScrollView(scrollPos);
        GUILayout.BeginVertical("box", GUILayout.ExpandHeight(true), GUILayout.ExpandWidth(true));

        EditorGUILayout.Space();
        if (Selection.activeGameObject)
        {
            // verify that we are selected on A TreeMaster Mesh before running any of the following methods
            if (Selection.activeGameObject.name != "TreeMaster")
            {
                // this isnt a TreeMaster mesh selection so we dont need to see the main controls
                // but this might be a Branch selection
                int selectionStatus = CheckSelectedMeshStatus();
                // this is a TM Branch
                if (selectionStatus != -1)
                {
                    GUILayout.Label(branchTypes[selectionStatus] + " Selected", EditorStyles.boldLabel);
                    EditorGUILayout.Space();
                    GUILayout.Label("This selection has " + branchOptionCount[selectionStatus] + " additional meshes", EditorStyles.label);
                    EditorGUILayout.Space();
                    if (Selection.activeGameObject.transform.childCount > 0)
                        GUILayout.Label("NOTE: this will change the placement of all foliage children, you may need to adjust them afterwards", EditorStyles.wordWrappedLabel);

                    int currentMeshIndex = GetCurrentMeshIndex();
                    selectionMesh = EditorGUILayout.IntSlider("Mesh Selection", currentMeshIndex, 1, branchOptionCount[selectionStatus]);//changes mesh
                    SwitchSelectionMesh(selectionMesh);

                    // if we are selected on a trunk, provide the option to add the controller easily
                    if (selectionStatus == 0)
                    {
                        EditorGUILayout.Space();
                        if (GUILayout.Button("Add Tree Master Controller?", GUILayout.MaxHeight(50), GUILayout.MinHeight(50)))
                            AddControllerToTrunk();
                    }

                }
                else
                {
                    GUILayout.Label("Not a TreeMaster Mesh", EditorStyles.boldLabel);
                    EditorGUILayout.Space();
                }

            }
            else
            {

                EditorGUILayout.Space();
                GUILayout.Label("Tree:", EditorStyles.boldLabel);
                int currentTreeIndex = GetCurrentTreeIndex();
                trunk = EditorGUILayout.IntSlider("Type", currentTreeIndex, 1, GetTotalCount("Assets/TreeMaster/Resources/Trees"));//changes tree version
                SwitchTrunk(trunk);
                EditorGUILayout.Space();
                GUILayout.Label("Trunk:", EditorStyles.boldLabel);
                bark = EditorGUILayout.IntSlider("Bark", bark, 1, GetTotalCount("Assets/TreeMaster/Resources/Materials/Barks"));//changes material
                SwitchBark(bark);
                trunkScale = EditorGUILayout.Slider("Trunk Scale", trunkScale, 0.01f, trunkMaxScale);//scaling
                ScaleTrunk(trunkScale);
                trunkRotation = EditorGUILayout.Slider("Trunk Rotate", trunkRotation, -180f, 180f);//scaling
                RotateTrunk(trunkRotation);
                EditorGUILayout.Space();

                GUILayout.Label("Foliage:", EditorStyles.boldLabel);
                EditorGUILayout.Space();
                int currentFoliageVariety = GetCurrentFoliageIndex();
                variety = EditorGUILayout.IntSlider("Variety", currentFoliageVariety, 1, foliageVarietyOptions);//changes mesh UV
                SwitchVariety(variety);
                leafMaterial = EditorGUILayout.IntSlider("Leaf Material", leafMaterial, 1, GetTotalCount("Assets/TreeMaster/Resources/Materials/Leaves"));//changes material
                SwitchLeafMaterial(leafMaterial);
                leafScale = EditorGUILayout.Slider("Foliage Scale", leafScale, 0.001f, foliageMaxScale);//scaling
                ScaleLeaves(leafScale);
                EditorGUILayout.Space();

                addFlowers = EditorGUILayout.Toggle("Add Flowers?", addFlowers);
                EnableFlowers(addFlowers); // make sure we enable all the flowers if we want them
                if (addFlowers)
                {
                    GUILayout.Label("Flowers:", EditorStyles.boldLabel);
                    EditorGUILayout.Space();

                    flowerVariety = EditorGUILayout.IntSlider("Variety", flowerVariety, 1, 9);//changes mesh UV
                    SwitchFlowerVariety(flowerVariety);
                    flowerScale = EditorGUILayout.Slider("Scale", flowerScale, 0.001f, flowersMaxScale);//scaling
                    ScaleFlowers(flowerScale);
                    EditorGUILayout.Space();
                }

                addRoots = EditorGUILayout.Toggle("Add Roots?", addRoots);
                EnableRoots(addRoots); // make sure we enable all the flowers if we want them
                if (addRoots)
                {
                    GUILayout.Label("Roots:", EditorStyles.boldLabel);
                    EditorGUILayout.Space();
                    rootsVariety = EditorGUILayout.IntSlider("Variety", rootsVariety, 1, 4);//changes mesh UV
                    SwitchRootsVariety(rootsVariety);
                    rootScale = EditorGUILayout.Slider("Roots Scale", rootScale, 0.01f, 3f);//scaling
                    ScaleRoots(rootScale);
                    rootsRotation = EditorGUILayout.Slider("Roots Rotate", rootsRotation, -180f, 180f);//scaling
                    RotateRoots(rootsRotation);
                }
                EditorGUILayout.Space();

                GUILayout.Label("Export", EditorStyles.boldLabel);
                EditorGUILayout.Space();
                EditorGUILayout.Space();


                int totalVertCount = GetTotalVertexCount(Selection.activeGameObject);
                if (totalVertCount > 65535)
                    EditorGUILayout.LabelField($"Total Vertex Count: {totalVertCount.ToString()} MAX is 65,535! Cannot Export!", EditorStyles.boldLabel);
                else
                    EditorGUILayout.LabelField($"Total Vertex Count: {totalVertCount.ToString()}", EditorStyles.boldLabel);


                if (addFlowers)
                {
                    GUILayout.BeginHorizontal("box");
                    if (GUILayout.Button("Reduce Flower Count by Quarter?", GUILayout.MaxHeight(50), GUILayout.MinHeight(50)))
                        ReduceCurrentMeshCountByHalf(true, 4);
                    if (GUILayout.Button("Reduce Flower Count by Half?", GUILayout.MaxHeight(50), GUILayout.MinHeight(50)))
                        ReduceCurrentMeshCountByHalf(true, 2);
                    GUILayout.EndHorizontal();
                }


                EditorGUILayout.Space();
                GUILayout.BeginHorizontal("box");
                if (GUILayout.Button("Reduce Foliage Count by Quarter?", GUILayout.MaxHeight(50), GUILayout.MinHeight(50)))
                    ReduceCurrentMeshCountByHalf(false, 4);

                if (GUILayout.Button("Reduce Foliage Count by Half?", GUILayout.MaxHeight(50), GUILayout.MinHeight(50)))
                    ReduceCurrentMeshCountByHalf(false, 2);

                GUILayout.EndHorizontal();
                EditorGUILayout.Space();
                changeName = EditorGUILayout.Toggle("Change Tree name?", changeName);
                if (changeName)
                {

                    GUILayout.BeginVertical("box", GUILayout.ExpandHeight(false), GUILayout.ExpandWidth(true));

                    newName = EditorGUILayout.TextField("Change Name to:", newName == string.Empty ? placeholder : newName);
                    GUILayout.EndVertical();
                    EditorGUILayout.Space();
                }
                else
                    newName = tempName;

                EditorGUILayout.Space();
                if (GUILayout.Button("Save this tree prefab", GUILayout.MaxHeight(50), GUILayout.MinHeight(50)))
                    SaveNewPrefab();

                EditorGUILayout.Space();
                if (totalVertCount < 65535)
                {
                    if (GUILayout.Button("Export Collapsed Mesh for Terrains", GUILayout.MaxHeight(30), GUILayout.MinHeight(30)))
                    {
                        if (ExportForTerrain())// if save was successful
                        {
                            newName = string.Empty;
                            tempName = string.Empty;
                        }
                        else
                        {//save didnt happen
                            Debug.Log("Save didn't go through");
                        }
                        GUILayout.Label("Exported tree will be located in /TreeMaster/Exports/", EditorStyles.wordWrappedLabel);
                    }
                }
            }

        }
        else
        {
            GUILayout.Label("Select Something if you want to change it...", EditorStyles.boldLabel);
        }

        GUILayout.EndVertical();
        GUILayout.EndScrollView();
    }

    private void AddControllerToTrunk()
    {
        GameObject newObj = new GameObject("TreeMaster");
        newObj.transform.parent = (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null;
        newObj.transform.localPosition = Vector3.zero;
        newObj.transform.parent = (Selection.activeGameObject.transform.parent != null) ? Selection.activeGameObject.transform.parent : null;
        Selection.activeGameObject.transform.parent = newObj.transform;
        Selection.activeGameObject = newObj;
    }

    private int GetCurrentMeshIndex()
    {
        // grab the last 2 characters off the name
        MeshFilter mf = Selection.activeGameObject.GetComponent<MeshFilter>();
        // store the name of this current mesh
        string currentMeshName = mf.sharedMesh.name;
        string last2chars = currentMeshName.Substring(currentMeshName.Length - 2);
        int meshNumber = -1;
        bool success = int.TryParse(last2chars, out meshNumber);
        if (success)
            return meshNumber;
        else
        {
            // we failed to parse the number so this must be only a single digit
            string lastChar = currentMeshName.Substring(currentMeshName.Length - 1);
            int singleMeshNumber = -1;
            bool successSingle = int.TryParse(lastChar, out singleMeshNumber);
            return singleMeshNumber;
        }


    }

    private int GetCurrentTreeIndex()
    {
        string currentMeshName = Selection.activeGameObject.transform.GetChild(0).gameObject.name;
        string last2chars = currentMeshName.Substring(currentMeshName.Length - 2);
        int meshNumber = -1;
        bool success = int.TryParse(last2chars, out meshNumber);
        if (success)
            return meshNumber;
        else
        {
            // we failed to parse the number so this must be only a single digit
            string lastChar = currentMeshName.Substring(currentMeshName.Length - 1);
            int singleMeshNumber = -1;
            bool successSingle = int.TryParse(lastChar, out singleMeshNumber);
            return singleMeshNumber;
        }
    }

    private int GetCurrentFoliageIndex()
    {
        //grab the mesh renderers off the children
        MeshRenderer[] meshRenderers = Selection.activeGameObject.transform.GetComponentsInChildren<MeshRenderer>(false);

        // setup for the name we will parse on
        string currentFoliageMaterialName = string.Empty;
        foreach (MeshRenderer renderer in meshRenderers)
        {
            // once we find a leaf material
            if (renderer.sharedMaterial.name.StartsWith("Leaves "))
                currentFoliageMaterialName = renderer.transform.GetComponent<MeshFilter>().sharedMesh.name;
        }

        if (currentFoliageMaterialName != string.Empty)
        {
            // now get the number        
            string last2chars = currentFoliageMaterialName.Substring(currentFoliageMaterialName.Length - 2);
            int meshNumber = -1;
            bool success = int.TryParse(last2chars, out meshNumber);
            if (success)
                return meshNumber;
            else
            {
                // we failed to parse the number so this must be only a single digit
                string lastChar = currentFoliageMaterialName.Substring(currentFoliageMaterialName.Length - 1);
                int singleMeshNumber = -1;
                bool successSingle = int.TryParse(lastChar, out singleMeshNumber);
                return singleMeshNumber;
            }
        }
        else
            return -1;
    }

    private int GetNumberToRemoveFromString(string currentName)
    {
        // grab the last 2 characters off the name
        string last2chars = currentName.Substring(currentName.Length - 2);
        int meshNumber = -1;
        bool success = int.TryParse(last2chars, out meshNumber);
        if (success)
            return 2;
        else
        {
            // we failed to parse the number so this must be only a single digit
            string lastChar = currentName.Substring(currentName.Length - 1);
            int singleMeshNumber = -1;
            bool successSingle = int.TryParse(lastChar, out singleMeshNumber);
            return 1;
        }
    }

    private void SwitchSelectionMesh(int selectionMeshVariety)
    {

        // if we are selected on a trunk, we need to load a different file
        Mesh[] fbxMeshes = Resources.LoadAll<Mesh>("Source Mesh/TM_Source");
        // make sure we have a mesh filter
        MeshFilter mf = Selection.activeGameObject.GetComponent<MeshFilter>();
        // if this gameobject has a mesh filter assigned, handle the swap
        if (mf != null)
        {
            // store the name of this current mesh
            string oldMeshName = mf.sharedMesh.name;
            //remove either 1 or 2 chars
            string varietyString = (selectionMeshVariety < 10 && GetNumberToRemoveFromString(oldMeshName) == 2) ? "0" + selectionMeshVariety : selectionMeshVariety.ToString();
            string newMeshName = oldMeshName.Remove(oldMeshName.Length - GetNumberToRemoveFromString(oldMeshName)) + varietyString;

            // as long as the swap mesh is different , swap it
            if (oldMeshName != newMeshName)
            {
                Selection.activeGameObject.name = newMeshName;
                if (fbxMeshes != null)
                {
                    foreach (Mesh mesh in fbxMeshes)
                        if (mesh.name == newMeshName)// if we find the name of what we want to swap with in the fbx file
                            mf.sharedMesh = mesh;// swap meshes
                }
            }
        }
    }

    int CheckSelectedMeshStatus()
    {
        int status = -1;//nothing we recognize
        MeshFilter mf = Selection.activeGameObject.GetComponent<MeshFilter>();
        // if this gameobject has a mesh filter assigned, handle the swap
        if (mf != null)
        {
            //branchTypes.ToList().FindIndex(0, 1, Selection.activeGameObject.name)
            if (mf.sharedMesh.name.StartsWith("TM_Trunk"))
                status = 0;

            else if (mf.sharedMesh.name.StartsWith("ABranch"))
                status = 1;

            else if (mf.sharedMesh.name.StartsWith("CBranch"))
                status = 2;
            else if (mf.sharedMesh.name.StartsWith("DBranch"))
                status = 3;
            else if (mf.sharedMesh.name.StartsWith("GBranch"))
                status = 4;
            else if (mf.sharedMesh.name.StartsWith("KBranch"))
                status = 5;
            else if (mf.sharedMesh.name.StartsWith("MBranch"))
                status = 6;
            else if (mf.sharedMesh.name.StartsWith("PBranch"))
                status = 7;
            else if (mf.sharedMesh.name.StartsWith("RWBranch"))
                status = 8;
            else if (mf.sharedMesh.name.StartsWith("SBranch"))
                status = 9;
            else if (mf.sharedMesh.name.StartsWith("Thin_Branch"))
                status = 10;
            else if (mf.sharedMesh.name.StartsWith("BranchMask"))
                status = 11;




        }
        return status;
    }

    private void ReduceCurrentMeshCountByHalf(bool isFlowers, int amount)
    {
        // get all renderers from the foliage object
        MeshRenderer[] meshRenderers = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(0).GetComponentsInChildren<MeshRenderer>(false);
        List<GameObject> removeList = new List<GameObject>();
        if (meshRenderers != null && meshRenderers.Length > 0)
        {
            for (int i = 0; i < meshRenderers.Length; i++)
            {
                if (i % amount == 0)
                {
                    if (!isFlowers)
                    {
                        // make sure this has a mesh filter on it
                        if (meshRenderers[i].sharedMaterial.name.StartsWith("Leaves") && meshRenderers[i].transform.name.StartsWith("Leaf"))
                            removeList.Add(meshRenderers[i].gameObject);
                    }
                    else
                    {

                    }
                    // make sure this has a mesh filter on it
                    if (meshRenderers[i].sharedMaterial.name.StartsWith(isFlowers ? "Flowers" : "Leaves"))
                        removeList.Add(meshRenderers[i].gameObject);

                }
            }
        }

        // now remove
        foreach (GameObject obj in removeList)
            obj.SetActive(false);

        flowersReduced = true;
        removeList.Clear();
    }

    private void SwitchRootsVariety(int rootsVarietyValue)
    {
        string varietyString = rootsVarietyValue < 10 ? "0" + rootsVarietyValue : rootsVarietyValue.ToString();
        // now jump down to the roots object
        GameObject rootsObj = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(1).transform.gameObject;

        if (fbxMeshes == null)
            fbxMeshes = Resources.LoadAll<Mesh>("Source Mesh/TM_Source");
        //only make changes if this is a leaf object
        MeshFilter mf = rootsObj.GetComponent<MeshFilter>();
        // if this gameobject has a mesh filter assigned, handle the swap
        if (mf != null)
        {
            // store the name of this current mesh
            string oldMeshName = mf.sharedMesh.name;
            string newMeshName = mf.sharedMesh.name.Remove(mf.sharedMesh.name.Length - 2) + varietyString;

            if (oldMeshName != newMeshName)
            {
                // as long as the swap mesh is different , swap it
                if (fbxMeshes != null)
                {
                    foreach (Mesh mesh in fbxMeshes)
                        if (mesh.name == newMeshName)// if we find the name of what we want to swap with in the fbx file
                            mf.sharedMesh = mesh;// swap meshes
                }
            }
        }
    }

    private void RotateRoots(float rootsRotationValue)
    {
        if (oldRootsRotation != rootsRotationValue)
        {
            Selection.activeGameObject.transform.GetChild(0).transform.GetChild(1).transform.localEulerAngles = new Vector3(0, rootsRotationValue, 0);
            oldRootsRotation = rootsRotationValue;
        }
    }

    private void ScaleRoots(float rootScaleValue)
    {
        if (oldTrunkScale != rootScaleValue)
        {
            Selection.activeGameObject.transform.GetChild(0).transform.GetChild(1).transform.localScale = new Vector3(rootScaleValue, rootScaleValue, rootScaleValue);
            oldTrunkScale = rootScaleValue;
        }
    }


    private void EnableRoots(bool addRoots)
    {
        List<MeshFilter> allRootRenderers = new List<MeshFilter>();
        Selection.activeGameObject.transform.GetChild(0).transform.GetChild(1).transform.GetComponentsInChildren<MeshFilter>(true, allRootRenderers);

        if (allRootRenderers != null)
            foreach (MeshFilter mesh in allRootRenderers)
                if (mesh.sharedMesh.name.StartsWith("Roots"))
                    mesh.transform.gameObject.SetActive(addRoots);
    }

    private void RotateTrunk(float trunkRotationValue)
    {
        if (oldTrunkRotation != trunkRotationValue)
        {
            Selection.activeGameObject.transform.GetChild(0).transform.localEulerAngles = new Vector3(0, trunkRotationValue, 0);
            oldTrunkRotation = trunkRotationValue;
        }
    }

    bool ExportForTerrain()
    {
        GameObject selected = Selection.activeGameObject;

        MeshRenderer[] meshRenderers = selected.GetComponentsInChildren<MeshRenderer>(false);

        Mesh mesh = new Mesh();
        Matrix4x4 myTransform = selected.transform.worldToLocalMatrix;
        List<Vector3> vertices = new List<Vector3>();
        List<Vector3> normals = new List<Vector3>();
        List<Vector2> uv1s = new List<Vector2>();
        List<Vector2> uv2s = new List<Vector2>();
        Dictionary<Material, List<int>> subMeshes = new Dictionary<Material, List<int>>();

        if (meshRenderers != null && meshRenderers.Length > 0)
        {
            foreach (MeshRenderer meshRenderer in meshRenderers)
            {
                MeshFilter filter = meshRenderer.gameObject.GetComponent<MeshFilter>();
                if (filter != null && filter.sharedMesh != null)
                {
                    MergeMeshInto(filter.sharedMesh, meshRenderer.sharedMaterials, myTransform * filter.transform.localToWorldMatrix, vertices, normals, uv1s, uv2s, subMeshes);
                    //add each child to the children list to delete at the very end
                    if (filter.gameObject != selected)
                        childrenOfTree.Add(filter.gameObject);
                }
            }
        }

        mesh.vertices = vertices.ToArray();
        if (normals.Count > 0)
            mesh.normals = normals.ToArray();
        if (uv1s.Count > 0)
            mesh.uv = uv1s.ToArray();

        mesh.subMeshCount = subMeshes.Keys.Count;
        Material[] materials = new Material[subMeshes.Keys.Count];
        int mIdx = 0;

        foreach (Material m in subMeshes.Keys)
        {
            materials[mIdx] = m;
            mesh.SetTriangles(subMeshes[m].ToArray(), mIdx++);
        }

        if (meshRenderers != null && meshRenderers.Length > 0)
        {
            MeshRenderer meshRend = selected.GetComponent<MeshRenderer>();
            if (meshRend == null)
                meshRend = selected.AddComponent<MeshRenderer>();
            meshRend.sharedMaterials = materials;

            MeshFilter meshFilter = selected.GetComponent<MeshFilter>();
            if (meshFilter == null)
                meshFilter = selected.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = mesh;

            //Store new combined mesh asset
            Mesh _mesh = new Mesh();
            string path = "";
            string optimizedMeshPath = "Assets/TreeMaster/My Library/Terrain Ready/Mesh Data";
            path = optimizedMeshPath + "/" + (changeName ? newName : selected.name) + ".asset";

            AssetDatabase.CreateAsset(selected.GetComponent<MeshFilter>().sharedMesh, path);

            /* handle new prefab*/

            // dig out the mesh asset we just saved 
            _mesh = (Mesh)AssetDatabase.LoadAssetAtPath(path, typeof(Mesh));

            // create a freah new game object
            GameObject newMeshToSave = new GameObject("new");
            // set it up
            newMeshToSave.AddComponent<MeshFilter>();
            newMeshToSave.GetComponent<MeshFilter>().sharedMesh = _mesh;
            newMeshToSave.AddComponent<MeshRenderer>();
            newMeshToSave.GetComponent<MeshRenderer>().materials = materials;
            newMeshToSave.GetComponent<MeshRenderer>().sharedMaterial = selected.GetComponent<MeshRenderer>().sharedMaterial;

            /* Begin to set up the LOD aspect */

            // create the empty parent
            GameObject go = new GameObject("Parent");
            newMeshToSave.transform.parent = go.transform;


            // add LOD
            go.AddComponent<LODGroup>();
            MeshRenderer[] newMR = go.GetComponentsInChildren<MeshRenderer>();
            // set the initial cull to 10%
            LOD[] initialLOD = new LOD[] { new LOD(10f / 100f, newMR) };
            go.GetComponent<LODGroup>().SetLODs(initialLOD);

            go.name = changeName ? newName : tempName;
            newMeshToSave.name = (changeName ? newName : tempName) + "_coreMesh_LOD0";

            string prefabPath = "";
            string optimizedPath = "Assets/TreeMaster/My Library/Terrain Ready";
            prefabPath = optimizedPath + "/" + (changeName ? newName : go.name) + ".prefab";

            GameObject successObject = PrefabUtility.SaveAsPrefabAsset(go, prefabPath);
            //finally remove the newly added renderer and mesh filter from the tree master controller
            DestroyImmediate(meshRend);
            DestroyImmediate(meshFilter);
            // reset active selection
            Selection.activeGameObject = selected;
            DestroyImmediate(go);

            return (successObject != null);
        }

        return false;
    }

    private void MergeMeshInto(Mesh meshToMerge, Material[] ms, Matrix4x4 transformMatrix, List<Vector3> vertices, List<Vector3> normals, List<Vector2> uv1s, List<Vector2> uv2s, Dictionary<Material, List<int>> subMeshes)
    {
        if (meshToMerge == null)
            return;
        int vertexOffset = vertices.Count;
        Vector3[] vs = meshToMerge.vertices;

        for (int i = 0; i < vs.Length; i++)
        {
            vs[i] = transformMatrix.MultiplyPoint3x4(vs[i]);
        }
        vertices.AddRange(vs);

        Quaternion rotation = Quaternion.LookRotation(transformMatrix.GetColumn(2), transformMatrix.GetColumn(1));
        Vector3[] ns = meshToMerge.normals;
        if (ns != null && ns.Length > 0)
        {
            for (int i = 0; i < ns.Length; i++)
                ns[i] = rotation * ns[i];
            normals.AddRange(ns);
        }

        Vector2[] uvs = meshToMerge.uv;
        if (uvs != null && uvs.Length > 0)
            uv1s.AddRange(uvs);
        uvs = meshToMerge.uv2;
        if (uvs != null && uvs.Length > 0)
            uv2s.AddRange(uvs);

        for (int i = 0; i < ms.Length; i++)
        {
            if (i < meshToMerge.subMeshCount)
            {
                int[] ts = meshToMerge.GetTriangles(i);
                if (ts.Length > 0)
                {
                    if (ms[i] != null && !subMeshes.ContainsKey(ms[i]))
                    {
                        subMeshes.Add(ms[i], new List<int>());
                    }
                    List<int> subMesh = subMeshes[ms[i]];
                    for (int t = 0; t < ts.Length; t++)
                    {
                        ts[t] += vertexOffset;
                    }
                    subMesh.AddRange(ts);
                }
            }
        }
    }
    void SaveNewPrefab()
    {
        string prefabPathBase = "Assets/TreeMaster/My Library/Prefabs";
        string prefabPath;
        // we want to save the actual tree object, not the treemaster controller
        GameObject selected = Selection.activeGameObject.transform.GetChild(0).gameObject;

        if (changeName)
            prefabPath = prefabPathBase + "/" + newName + ".prefab";
        else
            prefabPath = prefabPathBase + "/" + selected.name + ".prefab";

        PrefabUtility.SaveAsPrefabAsset(selected, prefabPath);
    }

    #region Scaling


    private void ScaleIvy(float ivyScaleValue)
    {
        if (oldIvyScale != ivyScaleValue)
        {
            Selection.activeGameObject.transform.GetChild(0).transform.GetChild(2).transform.localScale = new Vector3(ivyScaleValue, ivyScaleValue, ivyScaleValue);
            oldIvyScale = ivyScaleValue;
        }
    }

    private void ScaleVine(float vineScaleValue)
    {
        if (oldVineScale != vineScaleValue)
        {
            Selection.activeGameObject.transform.GetChild(0).transform.GetChild(1).transform.localScale = new Vector3(vineScaleValue, vineScaleValue, vineScaleValue);
            oldVineScale = vineScaleValue;
        }
    }

    private void ScaleTrunk(float trunkScaleValue)
    {
        if (oldTrunkScale != trunkScaleValue)
        {
            Selection.activeGameObject.transform.GetChild(0).transform.localScale = new Vector3(trunkScaleValue, trunkScaleValue, trunkScaleValue);
            oldTrunkScale = trunkScaleValue;
        }
    }

    private void ScaleLeaves(float leafScaleValue)
    {
        if (oldLeafScale != leafScaleValue)
        {
            List<MeshRenderer> allLeafRenderers = new List<MeshRenderer>();
            Selection.activeGameObject.transform.GetComponentsInChildren<MeshRenderer>(false, allLeafRenderers);

            if (allLeafRenderers != null)
                foreach (MeshRenderer renderer in allLeafRenderers)
                    if (renderer.sharedMaterial.name.StartsWith("Leaves "))
                        renderer.transform.localScale = new Vector3(leafScaleValue, leafScaleValue, leafScaleValue);

            oldLeafScale = leafScaleValue;
        }
    }

    private bool flowersReduced = false;
    private bool changeName;

    private void EnableFlowers(bool addFlowers)
    {
        // once we have reduced the flowers, stop re-activating them
        if (!flowersReduced)
        {
            List<MeshRenderer> allFlowerRenderers = new List<MeshRenderer>();
            Selection.activeGameObject.transform.GetComponentsInChildren<MeshRenderer>(true, allFlowerRenderers);

            if (allFlowerRenderers != null)
                foreach (MeshRenderer renderer in allFlowerRenderers)
                    if (renderer.sharedMaterial.name.StartsWith("Flowers"))
                        renderer.transform.gameObject.SetActive(addFlowers);
        }
    }


    private void ScaleFlowers(float flowerScaleValue)
    {
        if (oldFlowerScale != flowerScaleValue)
        {
            List<MeshRenderer> allFlowerRenderers = new List<MeshRenderer>();
            Selection.activeGameObject.transform.GetComponentsInChildren<MeshRenderer>(false, allFlowerRenderers);

            if (allFlowerRenderers != null)
                foreach (MeshRenderer renderer in allFlowerRenderers)
                    if (renderer.sharedMaterial.name.StartsWith("Flowers"))
                        renderer.transform.localScale = new Vector3(flowerScaleValue, flowerScaleValue, flowerScaleValue);

            oldFlowerScale = flowerScaleValue;
        }
    }





    #endregion

    #region Foliage


    public void SwitchVariety(int newVariety)
    {

        string varietyString = newVariety < 10 ? "0" + newVariety : newVariety.ToString();
        // now jump down to the foliage object
        GameObject foliageObj = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(0).gameObject;

        //make sure we have branches to loop through
        if (foliageObj.transform.childCount > 0)
            LoopThroughChildrenMesh(foliageObj, varietyString);
    }

    public void SwitchFlowerVariety(int newVariety)
    {
        if (newVariety != varietyOld)
        {
            string varietyString = newVariety < 10 ? "0" + newVariety : newVariety.ToString();

            // now jump down to the foliage object
            GameObject foliageObj = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(0).gameObject;

            //make sure we have branches to loop through
            if (foliageObj.transform.childCount > 0)
                LoopThroughChildrenFlowers(foliageObj, varietyString);

            varietyOld = newVariety;
        }
    }

    Mesh[] fbxMeshes;
    private void LoopThroughChildrenFlowers(GameObject foliageObj, string newVariety)
    {
        // Foliage object level
        if (fbxMeshes == null)
            fbxMeshes = Resources.LoadAll<Mesh>("Source Mesh/TM_Source");

        // loop and find all the meshes with the sourceName material assigned and swap them
        for (int i = 0; i < foliageObj.transform.childCount; i++)
        {
            // Branch level
            if (foliageObj.transform.GetChild(i).transform.childCount > 0)
                LoopThroughChildrenFlowers(foliageObj.transform.GetChild(i).gameObject, newVariety);

            //only make changes if this is a leaf object
            if (foliageObj.transform.GetChild(i).GetComponent<MeshRenderer>().sharedMaterial.name.StartsWith("Flowers "))
            {
                MeshFilter mf = foliageObj.transform.GetChild(i).GetComponent<MeshFilter>();
                // if this gameobject has a mesh filter assigned, handle the swap
                if (mf != null)
                {
                    // store the name of this current mesh
                    string oldMeshName = mf.sharedMesh.name;
                    string newMeshName = mf.sharedMesh.name.Remove(mf.sharedMesh.name.Length - 2) + newVariety;

                    if (oldMeshName != newMeshName)
                    {
                        // as long as the swap mesh is different , swap it
                        if (fbxMeshes != null)
                        {
                            foreach (Mesh mesh in fbxMeshes)
                                if (mesh.name == newMeshName)// if we find the name of what we want to swap with in the fbx file
                                    mf.sharedMesh = mesh;// swap meshes
                        }
                    }
                }
            }
        }
    }



    private void LoopThroughChildrenMesh(GameObject foliageObj, string newVariety)
    {
        if (fbxMeshes == null)
            fbxMeshes = Resources.LoadAll<Mesh>("Source Mesh/TM_Source");

        // loop and find all the meshes with the sourceName material assigned and swap them
        for (int i = 0; i < foliageObj.transform.childCount; i++)
        {
            // Branch level
            if (foliageObj.transform.GetChild(i).transform.childCount > 0)
                LoopThroughChildrenMesh(foliageObj.transform.GetChild(i).gameObject, newVariety);

            //only make changes if this is a leaf object
            MeshRenderer currentMR = foliageObj.transform.GetChild(i).GetComponent<MeshRenderer>();
            if (currentMR != null)
            {
                if (currentMR.sharedMaterial.name.StartsWith("Leaves "))
                {
                    MeshFilter mf = foliageObj.transform.GetChild(i).GetComponent<MeshFilter>();
                    // if this gameobject has a mesh filter assigned, handle the swap
                    if (mf != null)
                    {
                        // store the name of this current mesh
                        string oldMeshName = mf.sharedMesh.name;
                        string newMeshName = mf.sharedMesh.name.Remove(mf.sharedMesh.name.Length - 2) + newVariety;

                        if (oldMeshName != newMeshName)
                        {
                            // as long as the swap mesh is different , swap it
                            if (fbxMeshes != null)
                            {
                                foreach (Mesh mesh in fbxMeshes)
                                    if (mesh.name == newMeshName)// if we find the name of what we want to swap with in the fbx file
                                        mf.sharedMesh = mesh;// swap meshes
                            }
                        }
                    }
                }
            }

        }
    }



    #endregion

    #region Trunks
    private void SwitchRoots(int newRoots)
    {
        if (newRoots != rootsOld)
        {
            trunkString = newTrunkMeshName = GetNewVersionName(trunkString, 'r', newRoots);
            rootsOld = newRoots;
        }
    }

    private void SwitchLichen(int newLichen)
    {
        if (newLichen != lichenOld)
        {
            trunkString = newTrunkMeshName = GetNewVersionName(trunkString, 'l', newLichen);
            lichenOld = newLichen;
        }
    }

    private void SwitchTrunk(int newTrunk)
    {
        if (newTrunk != trunkOld)
        {
            trunkString = newTrunkMeshName = GetNewVersionName(trunkString, 't', newTrunk);
            string tempString = trunkString.Substring(0, trunkString.Length - 12);
            string finalVersion = tempString.Substring(tempString.Length - 2);
            SwitchTrunkVersion(finalVersion);
            trunkOld = newTrunk;
        }
    }

    private void SwitchBark(int newBark)
    {
        if (newBark != barkOld)
        {
            SwitchBarkMaterial("Bark " + newBark);
            SwitchBranchMaterial("Branch " + newBark);
            barkOld = newBark;
        }
    }
    #endregion

    int GetTotalCount(string folder) { return System.IO.Directory.GetFiles(folder).Length / 2; }


    void SwitchBarkMaterial(string newVersion)
    {
        // switch the trunk material
        MeshRenderer mr = Selection.activeGameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>();
        // if this gameobject has a mesh renderer assigned, handle the swap
        if (mr != null)
            if (mr.sharedMaterial.name.StartsWith("Bark "))
                mr.material = GetNewMaterial($"Materials/Barks/{newVersion}");


        // now change out the bark material on all bark based children
        GameObject foliageObj = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(0).gameObject;
        //make sure we have kids to loop through
        if (foliageObj.transform.childCount > 0)
            LoopThroughChildrenMaterials(foliageObj, newVersion, "Bark ", $"Materials/Barks/{newVersion}");

        // switch the roots material
        MeshRenderer rootsR = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(1).gameObject.GetComponent<MeshRenderer>();
        // if this gameobject has a mesh renderer assigned, handle the swap
        if (rootsR != null)
            if (rootsR.sharedMaterial.name.StartsWith("Bark "))
                rootsR.material = GetNewMaterial($"Materials/Barks/{newVersion}");

    }

    private void SwitchLeafMaterial(int leafMaterial)
    {
        if (leafMaterial != leavesOld)
        {
            SwitchLeavesMaterial("Leaves " + leafMaterial);

            leavesOld = leafMaterial;
        }
    }

    void SwitchLeavesMaterial(string newVersion)
    {
        // switch the trunk material
        MeshRenderer mr = Selection.activeGameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>();
        // if this gameobject has a mesh renderer assigned, handle the swap
        if (mr != null)
            if (mr.sharedMaterial.name.StartsWith("Leaves "))
                mr.material = GetNewMaterial($"Materials/Leaves/{newVersion}");

        // now change out the bark material on all bark based children
        GameObject foliageObj = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(0).gameObject;
        //make sure we have kids to loop through
        if (foliageObj.transform.childCount > 0)
            LoopThroughChildrenMaterials(foliageObj, newVersion, "Leaves ", $"Materials/Leaves/{newVersion}");
    }


    void SwitchBranchMaterial(string newVersion)
    {
        // switch the trunk material
        MeshRenderer mr = Selection.activeGameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>();
        // if this gameobject has a mesh renderer assigned, handle the swap
        if (mr != null)
            if (mr.sharedMaterial.name.StartsWith("Branch "))
                mr.material = GetNewMaterial($"Materials/Branches/{newVersion}");

        // now change out the bark material on all bark based children
        GameObject foliageObj = Selection.activeGameObject.transform.GetChild(0).transform.GetChild(0).gameObject;
        //make sure we have kids to loop through
        if (foliageObj.transform.childCount > 0)
            LoopThroughChildrenMaterials(foliageObj, newVersion, "Branch ", $"Materials/Branches/{newVersion}");
    }

    Material GetNewMaterial(string path) { return Resources.Load<Material>(path); }

    public void LoopThroughChildrenMaterials(GameObject currentGameObj, string newVersion, string sourceName, string pathtoMaterial)
    {
        // loop and find all the meshes with the sourceName material assigned and swap them
        for (int i = 0; i < currentGameObj.transform.childCount; i++)
        {
            MeshRenderer mrC = currentGameObj.transform.GetChild(i).GetComponent<MeshRenderer>();
            // if this gameobject has a mesh renderer assigned and 
            if (mrC != null)
                if (mrC.sharedMaterial.name.StartsWith(sourceName))
                    mrC.material = GetNewMaterial(pathtoMaterial);

            if (currentGameObj.transform.GetChild(i).transform.childCount > 0)
                LoopThroughChildrenMaterials(currentGameObj.transform.GetChild(i).gameObject, newVersion, sourceName, pathtoMaterial);
        }
    }



    #region Extras
    private void SwitchIvyVariety(int newIvyVariety)
    {

        if (newIvyVariety != ivyVarietyOld)
        {
            extrasString = newExtraMeshName = GetNewVersionName(extrasString, 'l', newIvyVariety);
            ivyVarietyOld = newIvyVariety;
        }
    }

    private void SwitchVineVariety(int newVineVariety)
    {
        if (newVineVariety != vineVarietyOld)
        {
            extrasString = newExtraMeshName = GetNewVersionName(extrasString, 'k', newVineVariety);
            vineVarietyOld = newVineVariety;
        }
    }

    private void SwitchIvy(int newIvy)
    {
        if (newIvy != ivyOld)
        {
            extrasString = newExtraMeshName = GetNewVersionName(extrasString, 'i', newIvy);
            ivyOld = newIvy;
        }
    }
    #endregion

    private int GetTotalVertexCount(GameObject selectedObject)
    {
        MeshRenderer[] meshRenderers = selectedObject.GetComponentsInChildren<MeshRenderer>(false);
        int totalVertexCount = 0;
        int totalMeshCount = 0;

        if (meshRenderers != null && meshRenderers.Length > 0)
        {
            foreach (MeshRenderer meshRenderer in meshRenderers)
            {
                MeshFilter filter = meshRenderer.gameObject.GetComponent<MeshFilter>();
                if (filter != null && filter.sharedMesh != null)
                {
                    totalVertexCount += filter.sharedMesh.vertexCount;
                    totalMeshCount++;
                }
            }
        }
        return totalVertexCount;
    }

    string GetNewVersionName(string inputString, char splitChar, int newVersion)
    {
        string[] split = inputString.Split(splitChar);
        string removed = split[1].Remove(0, 2);

        //add in the new variety
        string newVarietyString = newVersion + removed;
        //determine if we need to add a zero
        string finalName;
        if (newVersion < 10)
            finalName = split[0] + splitChar + "0" + newVarietyString;
        else
            finalName = split[0] + splitChar + newVarietyString;

        return finalName;
    }


    public void SwitchTrunkVersion(string newVersion)
    {
        flowersReduced = false;
        // only switch on the trunk mesh
        ChangeTreePrefab(newVersion);
    }

    private void SwitchVines(int newVines)
    {
        if (newVines != vinesOld)
        {
            extrasString = newExtraMeshName = GetNewVersionName(extrasString, 'v', newVines);
            vinesOld = newVines;
        }
    }



    private void ChangeTreePrefab(string newVersion)
    {
        // first remove the current tree
        DestroyImmediate(Selection.activeGameObject.transform.GetChild(0).gameObject);
        // get the new tree name
        string newTreePrefab = $"Trees/Tree_{newVersion}";
        //load the prefab
        GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load(newTreePrefab, typeof(GameObject)), Selection.activeGameObject.transform) as GameObject;
        PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
        // set the parent
        newObj.transform.parent = Selection.activeGameObject.transform;
    }

}
#endif