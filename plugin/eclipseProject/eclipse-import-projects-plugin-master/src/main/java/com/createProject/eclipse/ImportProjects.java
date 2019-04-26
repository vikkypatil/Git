package com.createProject.eclipse;

import java.io.*;
import java.util.*;
import java.util.regex.*;
import org.eclipse.cdt.core.CCorePlugin;

//import org.eclipse.cdt.core.*;
import org.eclipse.core.resources.*;
import org.eclipse.core.runtime.*;
import org.eclipse.equinox.app.*;
import org.osgi.framework.*;

public class ImportProjects implements org.eclipse.ui.IStartup {

    private static final String ARG_PROJECTNAME = "-projectName";

	private String getProjectName() {
        BundleContext context = Activator.getContext();
        ServiceReference<?> ser = context.getServiceReference(IApplicationContext.class.getName());
        IApplicationContext iac = (IApplicationContext) context.getService(ser);

        String[] args = (String[]) iac.getArguments().get(IApplicationContext.APPLICATION_ARGS);
        String projectName = new String();
        for (int i = 0; i < args.length; i++) {
            String arg = args[i];
            if (arg.compareToIgnoreCase(ARG_PROJECTNAME) == 0) {
                i++;
                if (i < args.length) {
                    projectName = args[i];
                    break;
                }
            }
        }

        return projectName;
    }

    @Override
    public void earlyStartup() {
        
         String projectName = this.getProjectName();
        // Create model project and accompanied project description
        IWorkspace workspace = ResourcesPlugin.getWorkspace();
        IWorkspaceRoot root = workspace.getRoot();

        IProject newProjectHandle = root.getProject(projectName);
       // Assert.assertNotNull(projectName);
       // Assert.assertNotNull(newProjectHandle);
       // Assert.assertFalse(newProjectHandle.exists());

        IProjectDescription description = 
        workspace.newProjectDescription(newProjectHandle.getName());
        IProject project = 
        CCorePlugin.getDefault().createCDTProject(description, newProjectHandle, 
        new NullProgressMonitor());
      //  Assert.assertTrue(newProjectHandle.isOpen());

      /*  CoreModel.getDefault().getProjectDescriptionManager();
        ICProjectDescription des = mngr.createProjectDescription(project, 
        false);
        ManagedProject mProj = new ManagedProject(des);

        Configuration cfg = new Configuration(mProj, null, 
        "your.configuration.id", "YourConfigurationName");

        IBuilder bld = cfg.getEditableBuilder();
        Assert.assertNotNull(bld);
        Assert.assertFalse(bld.isInternalBuilder());

        bld.setManagedBuildOn(false);

        CConfigurationData data = cfg.getConfigurationData();
        Assert.assertNotNull(data);
        des.createConfiguration(ManagedBuildManager.CFG_DATA_PROVIDE R_ID, data);

        // Persist the project description
        mngr.setProjectDescription(project, des);

        project.close(null);*/
    }
}


/*
    private List<File> findFilesRecursively(String path, String pattern, List<File> returnedList) {
        File root = new File(path);
        File[] list = root.listFiles();

        if (list == null)
            return returnedList;

        for (File f : list) {
            if (f.isDirectory()) {
                this.findFilesRecursively(f.getAbsolutePath(), pattern, returnedList);
            }
            else {
                if (Pattern.matches(pattern, f.getName()) == true) {
                    returnedList.add(f);
                }
            }
        }

        return returnedList;
    }
*/

/*
        String[] importPaths = this.getImportPaths();

        for (String importPath : importPaths) {
        	LogUtil.info(String.format("Searching for projects in %s", importPath));
            List<File> projectFiles = this.findFilesRecursively(importPath, "\\.project", new ArrayList<File>());

            for (File projectFile : projectFiles) {
                try {
                    IWorkspace workspace = ResourcesPlugin.getWorkspace();
                    IProjectDescription description = workspace.loadProjectDescription(
                            new Path(projectFile.toString()));
                    IProject project = workspace.getRoot().getProject(description.getName());
                    if (project.isOpen() == false) {
                    	LogUtil.info(String.format("Importing project %s %s", description.getName(), description.getLocationURI()));
                        project.create(description, null);
                        project.open(null);
                    } else {
                    	LogUtil.info(String.format("Refreshing project %s %s", description.getName(), description.getLocationURI()));
                        project.refreshLocal(IResource.DEPTH_INFINITE, null);
                    }
                } catch (CoreException e) {
                	LogUtil.error(e);
                }
            }
        }//for importPath
        */
        
                /*String[] args = (String[]) iac.getArguments().get(IApplicationContext.APPLICATION_ARGS);
        List<String> importPath = new ArrayList<String>();
        for (int i = 0; i < args.length; i++) {
            String arg = args[i];
            if (arg.compareToIgnoreCase(ARG_IMPORT) == 0) {
                i++;
                if (i < args.length) {
                    importPath.add(args[i]);
                }
            }
        }

        return importPath.toArray(new String[importPath.size()]);
        */