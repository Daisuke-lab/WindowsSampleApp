

export default async function runProcess() {
    const System = Windows.System;
    const ProcessLauncher = System.ProcessLauncher;
    console.log("you are in run Process")
    const result = await ProcessLauncher.runToCompletionAsync(`dir`, "")
    console.log(`you executed`)
    //console.log(result)
}