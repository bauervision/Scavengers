using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
using TreeMasterScreenshot;

namespace TreeMaster
{
    public static class MenuItems
    {

        #region Main Menu Tools

        [MenuItem("Tools/TreeMaster/Switch Mesh", false, 30)]
        private static void ShowToolSwitchMesh() { TM_ChangeMesh.ShowWindow(); }

        [MenuItem("Tools/TreeMaster/Swap Material", false, 30)]
        private static void ShowToolSwapMaterial() { TM_SwapMaterial.ShowWindow(); }

        [MenuItem("Tools/TreeMaster/Collapse Mesh", false, 30)]
        private static void ShowToolNewOptimized() { TM_CollapseMesh.ShowWindow(); }

        [MenuItem("Tools/TreeMaster/New Prefab", false, 30)]
        private static void ShowToolNewPrefab() { TM_SavePrefab.ShowWindow(); }

        [MenuItem("Tools/TreeMaster/Renamer", false, 50)]
        private static void ShowToolRenamer() { TM_Renamer.ShowWindow(); }

        [MenuItem("Tools/TreeMaster/Screenshot", false, 50)]
        private static void ShowToolScreenshot() { TM_Screenshots.ShowWindow(); }

        #endregion

        #region Assets


        #region Trees
        [MenuItem("GameObject/TreeMaster/Trees/Redwood", false, 10)]
        private static void CreateTMTreeRW()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_01", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Seqouia", false, 10)]
        private static void CreateTMTreeS()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_02", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Kapok", false, 10)]
        private static void CreateTMTreeK()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_03", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Maple", false, 10)]
        private static void CreateTMTreeM()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_04", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Bald Cypress", false, 10)]
        private static void CreateTMTreeB()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_05", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Hickory", false, 10)]
        private static void CreateTMTreeH()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_06", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Cypress Oak", false, 10)]
        private static void CreateTMTreeCO()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_07", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Pine", false, 10)]
        private static void CreateTMTreeP()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_08", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Spruce", false, 10)]
        private static void CreateTMTreeSpr()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_09", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Acacia", false, 10)]
        private static void CreateTMTreeAc()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_10", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Birch", false, 10)]
        private static void CreateTMTreeBir()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_11", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Sapling 1", false, 10)]
        private static void CreateTMTreeSap1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_12", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Sapling 2", false, 10)]
        private static void CreateTMTreeSap2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_13", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Trees/Forest Tree", false, 10)]
        private static void CreateTMTreeFor()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Trees/Tree_14", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }


        #endregion

        [MenuItem("GameObject/TreeMaster/Add Controller", false, 10)]
        private static void CreateController()
        {
            GameObject newObj = new GameObject("TreeMaster");
            newObj.transform.parent = (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null;
            newObj.transform.localPosition = Vector3.zero;
            newObj.transform.parent = (Selection.activeGameObject.transform.parent != null) ? Selection.activeGameObject.transform.parent : null;
            Selection.activeGameObject.transform.parent = newObj.transform;
            Selection.activeGameObject = newObj;
        }

        #region Groups
        [MenuItem("GameObject/TreeMaster/Groups/Foliage Bundle", false, 30)]
        private static void CreateFoliageGroup()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/FoliageGroup", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Groups/Leaf Plane Curved", false, 30)]
        private static void CreateLeafPlaneCurvedGroup()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/LeafPlaneCurvedGroup", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }


        [MenuItem("GameObject/TreeMaster/Groups/Leaf Planes", false, 30)]
        private static void CreateLeafPlaneBundle()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/LeafPlane_Group", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Groups/Pine Branches", false, 30)]
        private static void CreatePineLeafPlaneBundle()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/LeafCardBent", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Groups/Leaves", false, 50)]
        private static void CreateLeafCard()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/LeafCard", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        #endregion

        #region Parts

        [MenuItem("GameObject/TreeMaster/Parts/Leaf Plane", false, 50)]
        private static void CreateLeafPlane()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/LeafPlane_01", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Parts/Leaf Plane Curved", false, 50)]
        private static void CreateLeafPlaneCurved()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/LeafPlaneCurved", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Parts/Tree Flower", false, 50)]
        private static void CreateTreeFlower()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/Flower", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Parts/Branch Mask", false, 50)]
        private static void CreateBranchMask()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/BranchMask", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Parts/Dead Branch Mask", false, 50)]
        private static void CreateDeadBranchMask()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/BranchMask-DeadGroup", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Parts/Flowers Branch Mask", false, 50)]
        private static void CreateFlowersBranchMask()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/BranchMask_Flowers", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Parts/Trunk Mesh", false, 50)]
        private static void CreateTrunkMesh()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/TM_TrunkBase", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Parts/Roots", false, 50)]
        private static void CreateRoots()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Parts/Roots", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        #endregion

        #region Branches

        [MenuItem("GameObject/TreeMaster/Branches/Acacia/1", false, 50)]
        private static void CreateBranchAcacia1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Acacia/2", false, 50)]
        private static void CreateBranchAcacia2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Acacia/3", false, 50)]
        private static void CreateBranchAcacia3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Acacia/4", false, 50)]
        private static void CreateBranchAcacia4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch4", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Acacia/5", false, 50)]
        private static void CreateBranchAcacia5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch5", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Acacia/6", false, 50)]
        private static void CreateBranchAcacia6()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch6", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Acacia/7", false, 50)]
        private static void CreateBranchAcacia7()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch7", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Acacia/8", false, 50)]
        private static void CreateBranchAcacia8()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/ABranch8", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }


        [MenuItem("GameObject/TreeMaster/Branches/Cypress/1", false, 50)]
        private static void CreateBranchCypress1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/CBranch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Cypress/2", false, 50)]
        private static void CreateBranchCypress2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/CBranch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Cypress/3", false, 50)]
        private static void CreateBranchCypress3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/CBranch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Cypress/4", false, 50)]
        private static void CreateBranchCypress4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/CBranch4", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Cypress/5", false, 50)]
        private static void CreateBranchCypress5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/CBranch5", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Cypress/6", false, 50)]
        private static void CreateBranchCypress6()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/CBranch6", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Cypress/7", false, 50)]
        private static void CreateBranchCypress7()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/CBranch7", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Drooping/1", false, 50)]
        private static void CreateBranchDrooping1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/DBranch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Drooping/2", false, 50)]
        private static void CreateBranchDrooping2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/DBranch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Drooping/3", false, 50)]
        private static void CreateBranchDrooping3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/DBranch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/1", false, 50)]
        private static void CreateBranchGnarly1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch01", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/2", false, 50)]
        private static void CreateBranchGnarly2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch02", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/3", false, 50)]
        private static void CreateBranchGnarly3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch03", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/4", false, 50)]
        private static void CreateBranchGnarly4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch04", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/5", false, 50)]
        private static void CreateBranchGnarly5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch05", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/6", false, 50)]
        private static void CreateBranchGnarly6()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch06", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/7", false, 50)]
        private static void CreateBranchGnarly7()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch07", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/8", false, 50)]
        private static void CreateBranchGnarly8()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch08", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Gnarly/9", false, 50)]
        private static void CreateBranchGnarly9()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/GBranch09", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Kapok/1", false, 50)]
        private static void CreateBranchKapok1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/KBranch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Kapok/2", false, 50)]
        private static void CreateBranchKapok2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/KBranch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Kapok/3", false, 50)]
        private static void CreateBranchKapok3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/KBranch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Kapok/4", false, 50)]
        private static void CreateBranchKapok4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/KBranch4", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Kapok/5", false, 50)]
        private static void CreateBranchKapok5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/KBranch5", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Maple/1", false, 50)]
        private static void CreateBranchMaple1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/MBranch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Maple/2", false, 50)]
        private static void CreateBranchMaple2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/MBranch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Maple/3", false, 50)]
        private static void CreateBranchMaple3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/MBranch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Maple/4", false, 50)]
        private static void CreateBranchMaple4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/MBranch4", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Maple/5", false, 50)]
        private static void CreateBranchMaple5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/MBranch5", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Maple/6", false, 50)]
        private static void CreateBranchMaple6()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/MBranch6", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Maple/7", false, 50)]
        private static void CreateBranchMaple7()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/MBranch7", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Pine/1", false, 50)]
        private static void CreateBranchPine1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/PBranch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Pine/2", false, 50)]
        private static void CreateBranchPine2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/PBranch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Pine/3", false, 50)]
        private static void CreateBranchPine3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/PBranch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Pine/4", false, 50)]
        private static void CreateBranchPine4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/PBranch4", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Pine/5", false, 50)]
        private static void CreateBranchPine5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/PBranch5", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Pine/6", false, 50)]
        private static void CreateBranchPine6()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/PBranch6", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Redwood/1", false, 50)]
        private static void CreateBranchRedwood1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Redwood/2", false, 50)]
        private static void CreateBranchRedwood2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Redwood/3", false, 50)]
        private static void CreateBranchRedwood3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Redwood/4", false, 50)]
        private static void CreateBranchRedwood4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch4", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Redwood/5", false, 50)]
        private static void CreateBranchRedwood5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch5", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Redwood/6", false, 50)]
        private static void CreateBranchRedwood6()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch6", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Redwood/7", false, 50)]
        private static void CreateBranchRedwood7()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch7", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Redwood/8", false, 50)]
        private static void CreateBranchRedwood8()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/RW_Branch8", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Thin/1", false, 50)]
        private static void CreateBranchThin1()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/Thin_Branch1", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }

        [MenuItem("GameObject/TreeMaster/Branches/Thin/2", false, 50)]
        private static void CreateBranchThin2()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/Thin_Branch2", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Thin/3", false, 50)]
        private static void CreateBranchThin3()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/Thin_Branch3", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Thin/4", false, 50)]
        private static void CreateBranchThin4()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/Thin_Branch4", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Thin/5", false, 50)]
        private static void CreateBranchThin5()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/Thin_Branch5", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Thin/6", false, 50)]
        private static void CreateBranchThin6()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/Thin_Branch6", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        [MenuItem("GameObject/TreeMaster/Branches/Thin/7", false, 50)]
        private static void CreateBranchThin7()
        {
            GameObject newObj = PrefabUtility.InstantiatePrefab(Resources.Load("Branches/Thin_Branch7", typeof(GameObject)), (Selection.activeGameObject != null) ? Selection.activeGameObject.transform : null) as GameObject;
            PrefabUtility.UnpackPrefabInstance(newObj, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            Selection.activeGameObject = newObj;
        }
        #endregion

        #endregion



    }

}
#endif