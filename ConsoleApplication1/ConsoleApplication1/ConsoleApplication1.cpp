// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class DefaultShortcuts
{
public:
    void insert(const char* First_String, std::string Second_String, const char* Third_String, bool isbool)
    {
        std::cout << First_String << " " << Second_String << " " << Third_String << std::endl;
    }
    void insert(const char* First_String, std::string Second_String, const char* Third_String)
    {
        std::cout << First_String << " " << Second_String << " " << Third_String << std::endl;
    }
    void insert(const char* First_String, std::string Second_String)
    {
        std::cout << First_String << " " << Second_String << std::endl;
    }
};
std::string Shortcut(const char* First_String, const char* Second_String)
{
    return (std::string)First_String + " -> " + (std::string)Second_String;
}
std::string Shortcut(const char* First_String, const char* Second_String, const char* Third_String)
{
    return (std::string)First_String + " -> " + (std::string)Second_String + " -> " + (std::string)Third_String;
}
int main()
{
    DefaultShortcuts defaultShortcuts;
    // hotkeys settings
    defaultShortcuts.insert("FileOpen", Shortcut("File","Open") , "F3", true);
    defaultShortcuts.insert("FileAttach", Shortcut("File","Attach") , "Alt+A", true);
    defaultShortcuts.insert("FileDetach", Shortcut("File","Detach") , "Ctrl+Alt+F2", true);
    defaultShortcuts.insert("FileDbsave", Shortcut("File","Save database") , "", true);
    defaultShortcuts.insert("FileDbrecovery", Shortcut("File","Restore backup database") , "", true);
    defaultShortcuts.insert("FileDbload", Shortcut("File","Reload database") , "", true);
    defaultShortcuts.insert("FileDbclear", Shortcut("File","Clear database") , "", true);
    defaultShortcuts.insert("FileImportDatabase", Shortcut("File","Import database") , "", true);
    defaultShortcuts.insert("FileExportDatabase", Shortcut("File","Export database") , "", true);
    defaultShortcuts.insert("FileRestartAdmin", Shortcut("File","Restart as Admin") , "", true);
    defaultShortcuts.insert("FileExit", Shortcut("File","Exit") , "Alt+X", true);

    defaultShortcuts.insert("ViewCpu", Shortcut("View","CPU") , "Alt+C", true);
    defaultShortcuts.insert("ViewLog", Shortcut("View","Log") , "Alt+L", true);
    defaultShortcuts.insert("ViewBreakpoints", Shortcut("View","Breakpoints") , "Alt+B", true);
    defaultShortcuts.insert("ViewMemoryMap", Shortcut("View","Memory Map") , "Alt+M", true);
    defaultShortcuts.insert("ViewCallStack", Shortcut("View","Call Stack") , "Alt+K", true);
    defaultShortcuts.insert("ViewNotes", Shortcut("View","Notes") , "Alt+N", true);
    defaultShortcuts.insert("ViewSEHChain", Shortcut("View","SEH") , "", true);
    defaultShortcuts.insert("ViewScript", Shortcut("View","Script") , "Alt+S", true);
    defaultShortcuts.insert("ViewSymbolInfo", Shortcut("View","Symbol Info") , "Ctrl+Alt+S", true);
    defaultShortcuts.insert("ViewModules", Shortcut("View","Modules") , "Alt+E", true);
    defaultShortcuts.insert("ViewSource", Shortcut("View","Source") , "Ctrl+Shift+S", true);
    defaultShortcuts.insert("ViewReferences", Shortcut("View","References") , "Alt+R", true);
    defaultShortcuts.insert("ViewThreads", Shortcut("View","Threads") , "Alt+T", true);
    defaultShortcuts.insert("ViewPatches", Shortcut("View","Patches") , "Ctrl+P", true);
    defaultShortcuts.insert("ViewComments", Shortcut("View","Comments") , "Ctrl+Alt+C", true);
    defaultShortcuts.insert("ViewLabels", Shortcut("View","Labels") , "Ctrl+Alt+L", true);
    defaultShortcuts.insert("ViewBookmarks", Shortcut("View","Bookmarks") , "Ctrl+Alt+B", true);
    defaultShortcuts.insert("ViewFunctions", Shortcut("View","Functions") , "Ctrl+Alt+F", true);
    defaultShortcuts.insert("ViewVariables", Shortcut("View","Variables") , "", true);
    defaultShortcuts.insert("ViewHandles", Shortcut("View","Handles") , "", true);
    defaultShortcuts.insert("ViewGraph", Shortcut("View","Graph") , "Alt+G", true);
    defaultShortcuts.insert("ViewPreviousTab", Shortcut("View","Previous Tab") , "Alt+Left");
    defaultShortcuts.insert("ViewNextTab", Shortcut("View","Next Tab") , "Alt+Right");
    defaultShortcuts.insert("ViewPreviousHistory", Shortcut("View","Previous View") , "Ctrl+Shift+Tab");
    defaultShortcuts.insert("ViewNextHistory", Shortcut("View","Next View") , "Ctrl+Tab");
    defaultShortcuts.insert("ViewHideTab", Shortcut("View","Hide Tab") , "Ctrl+W");

    defaultShortcuts.insert("DebugRun", Shortcut("Debug","Run") , "F9", true);
    defaultShortcuts.insert("DebugeRun", Shortcut("Debug","Run (pass exception)") , "Shift+F9", true);
    defaultShortcuts.insert("DebugseRun", Shortcut("Debug","Run (swallow exception)") , "Ctrl+Alt+Shift+F9", true);
    defaultShortcuts.insert("DebugRunSelection", Shortcut("Debug","Run until selection") , "F4", true);
    defaultShortcuts.insert("DebugRunExpression", Shortcut("Debug","Run until expression") , "Shift+F4", true);
    defaultShortcuts.insert("DebugPause", Shortcut("Debug","Pause") , "F12", true);
    defaultShortcuts.insert("DebugRestart", Shortcut("Debug","Restart") , "Ctrl+F2", true);
    defaultShortcuts.insert("DebugClose", Shortcut("Debug","Close") , "Alt+F2", true);
    defaultShortcuts.insert("DebugStepInto", Shortcut("Debug","Step into") , "F7", true);
    defaultShortcuts.insert("DebugeStepInto", Shortcut("Debug","Step into (pass exception)") , "Shift+F7", true);
    defaultShortcuts.insert("DebugseStepInto", Shortcut("Debug","Step into (swallow exception)") , "Ctrl+Alt+Shift+F7", true);
    defaultShortcuts.insert("DebugStepIntoSource", Shortcut("Debug","Step into (source)") , "F11", true);
    defaultShortcuts.insert("DebugStepOver", Shortcut("Debug","Step over") , "F8", true);
    defaultShortcuts.insert("DebugeStepOver", Shortcut("Debug","Step over (pass exception)") , "Shift+F8", true);
    defaultShortcuts.insert("DebugseStepOver", Shortcut("Debug","Step over (swallow exception)") , "Ctrl+Alt+Shift+F8", true);
    defaultShortcuts.insert("DebugStepOverSource", Shortcut("Debug","Step over (source)") , "F10", true);
    defaultShortcuts.insert("DebugRtr", Shortcut("Debug","Execute till return") , "Ctrl+F9", true);
    defaultShortcuts.insert("DebugeRtr", Shortcut("Debug","Execute till return (pass exception)") , "Ctrl+Shift+F9", true);
    defaultShortcuts.insert("DebugRtu", Shortcut("Debug","Run to user code") , "Alt+F9", true);
    defaultShortcuts.insert("DebugSkipNextInstruction", Shortcut("Debug","Skip next instruction") , "", true);
    defaultShortcuts.insert("DebugCommand", Shortcut("Debug","Command") , "Ctrl+Return", true);
    defaultShortcuts.insert("DebugTraceIntoConditional", Shortcut("Debug","Trace into...") , "Ctrl+Alt+F7", true);
    defaultShortcuts.insert("DebugTraceOverConditional", Shortcut("Debug","Trace over...") , "Ctrl+Alt+F8", true);
    defaultShortcuts.insert("DebugEnableTraceRecordBit", Shortcut("Debug","Trace coverage","Bit") , "", true);
    defaultShortcuts.insert("DebugTraceRecordNone", Shortcut("Debug","Trace coverage","None") , "", true);
    defaultShortcuts.insert("DebugInstrUndo", Shortcut("Debug","Undo instruction") , "Alt+U", true);
    defaultShortcuts.insert("DebugAnimateInto", Shortcut("Debug","Animate into") , "Ctrl+F7", true);
    defaultShortcuts.insert("DebugAnimateOver", Shortcut("Debug","Animate over") , "Ctrl+F8", true);
    defaultShortcuts.insert("DebugAnimateCommand", Shortcut("Debug","Animate command") , "", true);
    defaultShortcuts.insert("DebugTraceIntoIntoTracerecord", Shortcut("Debug","Step into until reaching uncovered code") , "", true);
    defaultShortcuts.insert("DebugTraceOverIntoTracerecord", Shortcut("Debug","Step over until reaching uncovered code") , "", true);
    defaultShortcuts.insert("DebugTraceIntoBeyondTracerecord", Shortcut("Debug","Step into until reaching covered code") , "", true);
    defaultShortcuts.insert("DebugTraceOverBeyondTracerecord", Shortcut("Debug","Step over until reaching covered code") , "", true);

    defaultShortcuts.insert("PluginsScylla", Shortcut("Plugins","Scylla") , "Ctrl+I", true);

    defaultShortcuts.insert("FavouritesManage", Shortcut("Favourites","Manage Favourite Tools") , "", true);

    defaultShortcuts.insert("OptionsPreferences", Shortcut("Options","Preferences") , "", true);
    defaultShortcuts.insert("OptionsAppearance", Shortcut("Options","Appearance") , "", true);
    defaultShortcuts.insert("OptionsShortcuts", Shortcut("Options","Hotkeys") , "", true);
    defaultShortcuts.insert("OptionsTopmost", Shortcut("Options","Topmost") , "Ctrl+F5", true);
    defaultShortcuts.insert("OptionsReloadStylesheet", Shortcut("Options","Reload style.css") , "", true);

    defaultShortcuts.insert("HelpAbout", Shortcut("Help","About") , "", true);
    defaultShortcuts.insert("HelpBlog", Shortcut("Help","Blog") , "", true);
    defaultShortcuts.insert("HelpDonate", Shortcut("Help","Donate") , "", true);
    defaultShortcuts.insert("HelpCalculator", Shortcut("Help","Calculator") , "?");
    defaultShortcuts.insert("HelpReportBug", Shortcut("Help","Report Bug") , "", true);
    defaultShortcuts.insert("HelpManual", Shortcut("Help","Manual") , "F1", true);
    defaultShortcuts.insert("HelpCrashDump", Shortcut("Help","Generate Crash Dump") , "", true);

    defaultShortcuts.insert("ActionFindStrings", Shortcut("Actions","Find Strings") , "", true);
    defaultShortcuts.insert("ActionFindStringsModule", Shortcut("Actions","Find Strings in Current Module") , "Shift+D", true);
    defaultShortcuts.insert("ActionFindIntermodularCalls", Shortcut("Actions","Find Intermodular Calls") , "", true);
    defaultShortcuts.insert("ActionToggleBreakpoint", Shortcut("Actions","Toggle Breakpoint") , "F2");
    defaultShortcuts.insert("ActionEditBreakpoint", Shortcut("Actions","Set Conditional Breakpoint") , "Shift+F2");
    defaultShortcuts.insert("ActionToggleBookmark", Shortcut("Actions","Toggle Bookmark") , "Ctrl+D");
    defaultShortcuts.insert("ActionDeleteBreakpoint", Shortcut("Actions","Delete Breakpoint") , "Delete");
    defaultShortcuts.insert("ActionEnableDisableBreakpoint", Shortcut("Actions","Enable/Disable Breakpoint") , "Space");
    defaultShortcuts.insert("ActionResetHitCountBreakpoint", Shortcut("Actions","Reset breakpoint hit count") );
    defaultShortcuts.insert("ActionEnableAllBreakpoints", Shortcut("Actions","Enable all breakpoints") );
    defaultShortcuts.insert("ActionDisableAllBreakpoints", Shortcut("Actions","Disable all breakpoints") );
    defaultShortcuts.insert("ActionRemoveAllBreakpoints", Shortcut("Actions","Remove all breakpoints") );

    defaultShortcuts.insert("ActionBinaryEdit", Shortcut("Actions","Binary Edit") , "Ctrl+E");
    defaultShortcuts.insert("ActionBinaryFill", Shortcut("Actions","Binary Fill") , "F");
    defaultShortcuts.insert("ActionBinaryFillNops", Shortcut("Actions","Binary Fill NOPs") , "Ctrl+9");
    defaultShortcuts.insert("ActionBinaryCopy", Shortcut("Actions","Binary Copy") , "Shift+C");
    defaultShortcuts.insert("ActionBinaryPaste", Shortcut("Actions","Binary Paste") , "Shift+V");
    defaultShortcuts.insert("ActionBinaryPasteIgnoreSize", Shortcut("Actions","Binary Paste (Ignore Size)") , "Ctrl+Shift+V");
    defaultShortcuts.insert("ActionBinarySave", Shortcut("Actions","Binary Save") );
    defaultShortcuts.insert("ActionUndoSelection", Shortcut("Actions","Undo Selection") , "Ctrl+Backspace");
    defaultShortcuts.insert("ActionSetLabel", Shortcut("Actions","Set Label") , ":");
    defaultShortcuts.insert("ActionSetLabelOperand", Shortcut("Actions","Set Label for the Operand") , "Alt+;");
    defaultShortcuts.insert("ActionSetComment", Shortcut("Actions","Set Comment") , ";");
    defaultShortcuts.insert("ActionToggleFunction", Shortcut("Actions","Toggle Function") , "Shift+F");
    defaultShortcuts.insert("ActionAddLoop", Shortcut("Actions","Add Loop") , "Shift+L");
    defaultShortcuts.insert("ActionDeleteLoop", Shortcut("Actions","Delete Loop") , "Ctrl+Shift+L");
    defaultShortcuts.insert("ActionToggleArgument", Shortcut("Actions","Toggle Argument") , "Shift+A");
    defaultShortcuts.insert("ActionAssemble", Shortcut("Actions","Assemble") , "Space");
    defaultShortcuts.insert("ActionSetNewOriginHere", Shortcut("Actions","Set EIP or RIP Here") , "Ctrl+*");
    defaultShortcuts.insert("ActionGotoOrigin", Shortcut("Actions","Goto Origin") , "*");
    defaultShortcuts.insert("ActionGotoCBP", Shortcut("Actions","Goto EBP/RBP") );
    defaultShortcuts.insert("ActionGotoPrevious", Shortcut("Actions","Goto Previous") , "-");
    defaultShortcuts.insert("ActionGotoNext", Shortcut("Actions","Goto Next") , "+");
    defaultShortcuts.insert("ActionGotoExpression", Shortcut("Actions","Goto Expression") , "Ctrl+G");
    defaultShortcuts.insert("ActionGotoStart", Shortcut("Actions","Goto Start of Page") , "Home");
    defaultShortcuts.insert("ActionGotoEnd", Shortcut("Actions","Goto End of Page") , "End");
    defaultShortcuts.insert("ActionGotoFunctionStart", Shortcut("Actions","Goto Start of Function") , "Ctrl+Home");
    defaultShortcuts.insert("ActionGotoFunctionEnd", Shortcut("Actions","Goto End of Function") , "Ctrl+End");
    defaultShortcuts.insert("ActionGotoFileOffset", Shortcut("Actions","Goto File Offset") , "Ctrl+Shift+G");
    defaultShortcuts.insert("ActionFindReferencesToSelectedAddress", Shortcut("Actions","Find References to Selected Address") , "Ctrl+R");
    defaultShortcuts.insert("ActionFindPattern", Shortcut("Actions","Find Pattern") , "Ctrl+B");
    defaultShortcuts.insert("ActionFindPatternInModule", Shortcut("Actions","Find Pattern in Current Module") , "Ctrl+Shift+B");
    defaultShortcuts.insert("ActionFindNamesInModule", Shortcut("Actions","Find Names in Current Module") , "Ctrl+N");
    defaultShortcuts.insert("ActionFindReferences", Shortcut("Actions","Find References") , "Ctrl+R");
    defaultShortcuts.insert("ActionXrefs", Shortcut("Actions","xrefs...") , "X");
    defaultShortcuts.insert("ActionAnalyzeSingleFunction", Shortcut("Actions","Analyze Single Function") , "A");
    defaultShortcuts.insert("ActionAnalyzeModule", Shortcut("Actions","Analyze Module") , "Ctrl+A");
    defaultShortcuts.insert("ActionHelpOnMnemonic", Shortcut("Actions","Help on Mnemonic") , "Ctrl+F1");
    defaultShortcuts.insert("ActionToggleMnemonicBrief", Shortcut("Actions","Toggle Mnemonic Brief") , "Ctrl+Shift+F1");
    defaultShortcuts.insert("ActionHighlightingMode", Shortcut("Actions","Highlighting Mode") , "H");
    defaultShortcuts.insert("ActionToggleDestinationPreview", Shortcut("Actions","Enable/Disable Branch Destination Preview") , "P");
    defaultShortcuts.insert("ActionFind", Shortcut("Actions","Find") , "Ctrl+F");
    defaultShortcuts.insert("ActionFindInModule", Shortcut("Actions","Find in Current Module") , "Ctrl+Shift+F");
    defaultShortcuts.insert("ActionToggleLogging", Shortcut("Actions","Enable/Disable Logging") , "");
    defaultShortcuts.insert("ActionAllocateMemory", Shortcut("Actions","Allocate Memory") , "");
    defaultShortcuts.insert("ActionFreeMemory", Shortcut("Actions","Free Memory") , "");
    defaultShortcuts.insert("ActionSyncWithExpression", Shortcut("Actions","Sync With Expression") , "");
    defaultShortcuts.insert("ActionCopyAllRegisters", Shortcut("Actions","Copy All Registers") , "");
    defaultShortcuts.insert("ActionMarkAsUser", Shortcut("Actions","Mark As User Module") , "");
    defaultShortcuts.insert("ActionMarkAsSystem", Shortcut("Actions","Mark As System Module") , "");
    defaultShortcuts.insert("ActionMarkAsParty", Shortcut("Actions","Mark As Party") , "");
    defaultShortcuts.insert("ActionSetHwBpE", Shortcut("Actions","Set Hardware Breakpoint (Execute)") , "");
    defaultShortcuts.insert("ActionRemoveHwBp", Shortcut("Actions","Remove Hardware Breakpoint") , "");
    defaultShortcuts.insert("ActionRemoveTypeAnalysisFromModule", Shortcut("Actions","Remove Type Analysis From Module") , "Ctrl+Shift+U");
    defaultShortcuts.insert("ActionRemoveTypeAnalysisFromSelection", Shortcut("Actions","Remove Type Analysis From Selection") , "U");
    defaultShortcuts.insert("ActionTreatSelectionAsCode", Shortcut("Actions","Treat Selection As","Code") , "C");
    defaultShortcuts.insert("ActionTreatSelectionAsByte", Shortcut("Actions","Treat Selection As","Byte") , "B");
    defaultShortcuts.insert("ActionTreatSelectionAsWord", Shortcut("Actions","Treat Selection As","Word") , "W");
    defaultShortcuts.insert("ActionTreatSelectionAsDword", Shortcut("Actions","Treat Selection As","Dword") , "D");
    defaultShortcuts.insert("ActionTreatSelectionAsFword", Shortcut("Actions","Treat Selection As","Fword") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsQword", Shortcut("Actions","Treat Selection As","Qword") , "Q");
    defaultShortcuts.insert("ActionTreatSelectionAsTbyte", Shortcut("Actions","Treat Selection As","Tbyte") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsOword", Shortcut("Actions","Treat Selection As","Oword") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsFloat", Shortcut("Actions","Treat Selection As","Float") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsDouble", Shortcut("Actions","Treat Selection As","Double") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsLongDouble", Shortcut("Actions","Treat Selection As","LongDouble") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsASCII", Shortcut("Actions","Treat Selection As","ASCII") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsUNICODE", Shortcut("Actions","Treat Selection As","UNICODE") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsMMWord", Shortcut("Actions","Treat Selection As","MMWord") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsXMMWord", Shortcut("Actions","Treat Selection As","XMMWord") , "");
    defaultShortcuts.insert("ActionTreatSelectionAsYMMWord", Shortcut("Actions","Treat Selection As","YMMWord") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsCode", Shortcut("Actions","Treat Selection Head As","Code") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsByte", Shortcut("Actions","Treat Selection Head As","Byte") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsWord", Shortcut("Actions","Treat Selection Head As","Word") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsDword", Shortcut("Actions","Treat Selection Head As","Dword") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsFword", Shortcut("Actions","Treat Selection Head As","Fword") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsQword", Shortcut("Actions","Treat Selection Head As","Qword") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsTbyte", Shortcut("Actions","Treat Selection Head As","Tbyte") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsOword", Shortcut("Actions","Treat Selection Head As","Oword") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsFloat", Shortcut("Actions","Treat Selection Head As","Float") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsDouble", Shortcut("Actions","Treat Selection Head As","Double") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsLongDouble", Shortcut("Actions","Treat Selection Head As","LongDouble") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsASCII", Shortcut("Actions","Treat Selection Head As","ASCII") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsUNICODE", Shortcut("Actions","Treat Selection Head As","UNICODE") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsMMWord", Shortcut("Actions","Treat Selection Head As","MMWord") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsXMMWord", Shortcut("Actions","Treat Selection Head As","XMMWord") , "");
    defaultShortcuts.insert("ActionTreatSelectionHeadAsYMMWord", Shortcut("Actions","Treat Selection Head As","YMMWord") , "");
    defaultShortcuts.insert("ActionToggleRegisterValue", Shortcut("Actions","Toggle Register Value") , "Space");
    defaultShortcuts.insert("ActionClear", Shortcut("Actions","Clear") , "Ctrl+L");
    defaultShortcuts.insert("ActionCopy", Shortcut("Actions","Copy") , "Ctrl+C");
    defaultShortcuts.insert("ActionCopyAddress", Shortcut("Actions","Copy Address") , "Alt+INS");
    defaultShortcuts.insert("ActionCopyRva", Shortcut("Actions","Copy RVA") , "");
    defaultShortcuts.insert("ActionCopySymbol", Shortcut("Actions","Copy Symbol") , "Ctrl+S");
    defaultShortcuts.insert("ActionCopyLine", Shortcut("Actions","Copy Line") , "");
    defaultShortcuts.insert("ActionLoadScript", Shortcut("Actions","Load Script") , "Ctrl+O");
    defaultShortcuts.insert("ActionReloadScript", Shortcut("Actions","Reload Script") , "Ctrl+R");
    defaultShortcuts.insert("ActionUnloadScript", Shortcut("Actions","Unload Script") , "Ctrl+U");
    defaultShortcuts.insert("ActionEditScript", Shortcut("Actions","Edit Script") , "");
    defaultShortcuts.insert("ActionRunScript", Shortcut("Actions","Run Script") , "Space");
    defaultShortcuts.insert("ActionToggleBreakpointScript", Shortcut("Actions","Toggle Script Breakpoint") , "F2");
    defaultShortcuts.insert("ActionRunToCursorScript", Shortcut("Actions","Run Script to Cursor") , "Shift+F4");
    defaultShortcuts.insert("ActionStepScript", Shortcut("Actions","Step Script") , "Tab");
    defaultShortcuts.insert("ActionAbortScript", Shortcut("Actions","Abort Script") , "Esc");
    defaultShortcuts.insert("ActionExecuteCommandScript", Shortcut("Actions","Execute Script Command") , "X");
    defaultShortcuts.insert("ActionRefresh", Shortcut("Actions","Refresh") , "F5");
    defaultShortcuts.insert("ActionGraph", Shortcut("Actions","Graph") , "G");
    defaultShortcuts.insert("ActionGraphZoomToCursor", Shortcut("Actions","Graph","Zoom to cursor") , "Z");
    defaultShortcuts.insert("ActionGraphFitToWindow", Shortcut("Actions","Graph","Fit To Window") , "Shift+Z");
    defaultShortcuts.insert("ActionGraphFollowDisassembler", Shortcut("Actions","Graph","Follow in disassembler") , "Shift+Return");
    defaultShortcuts.insert("ActionGraphSaveImage", Shortcut("Actions","Graph","Save as image") , "I");
    defaultShortcuts.insert("ActionGraphToggleOverview", Shortcut("Actions","Graph","Toggle overview") , "O");
    defaultShortcuts.insert("ActionGraphToggleSummary", Shortcut("Actions","Graph","Toggle summary") , "U");
    defaultShortcuts.insert("ActionGraphSyncOrigin", Shortcut("Actions","Graph","Toggle sync with EIP or RIP") , "S");
    defaultShortcuts.insert("ActionIncrementx87Stack", Shortcut("Actions","Increment x87 Stack") );
    defaultShortcuts.insert("ActionDecrementx87Stack", Shortcut("Actions","Decrement x87 Stack") );
    defaultShortcuts.insert("ActionRedirectLog", Shortcut("Actions","Redirect Log") );
    defaultShortcuts.insert("ActionBrowseInExplorer", Shortcut("Actions","Browse in Explorer") );
    defaultShortcuts.insert("ActionDownloadSymbol", Shortcut("Actions","Download Symbols for This Module") );
    defaultShortcuts.insert("ActionDownloadAllSymbol", Shortcut("Actions","Download Symbols for All Modules") );
    defaultShortcuts.insert("ActionCreateNewThreadHere", Shortcut("Actions","Create New Thread Here") );
    defaultShortcuts.insert("ActionOpenSourceFile", Shortcut("Actions","Open Source File") );
    defaultShortcuts.insert("ActionFollowMemMap", Shortcut("Actions","Follow in Memory Map") );
    defaultShortcuts.insert("ActionFollowStack", Shortcut("Actions","Follow in Stack") );
    defaultShortcuts.insert("ActionFollowDisasm", Shortcut("Actions","Follow in Disassembler") );
    defaultShortcuts.insert("ActionFollowDwordQwordDisasm", Shortcut("Actions","Follow DWORD/QWORD in Disassembler") );
    defaultShortcuts.insert("ActionFollowDwordQwordDump", Shortcut("Actions","Follow DWORD/QWORD in Dump") );
    defaultShortcuts.insert("ActionFreezeStack", Shortcut("Actions","Freeze the stack") );
    defaultShortcuts.insert("ActionGotoBaseOfStackFrame", Shortcut("Actions","Go to Base of Stack Frame") );
    defaultShortcuts.insert("ActionGotoPrevStackFrame", Shortcut("Actions","Go to Previous Stack Frame") );
    defaultShortcuts.insert("ActionGotoNextStackFrame", Shortcut("Actions","Go to Next Stack Frame") );
    defaultShortcuts.insert("ActionGotoPreviousReference", Shortcut("Actions","Go to Previous Reference") , "Ctrl+K");
    defaultShortcuts.insert("ActionGotoNextReference", Shortcut("Actions","Go to Next Reference") , "Ctrl+L");
    defaultShortcuts.insert("ActionModifyValue", Shortcut("Actions","Modify value") , "Space");
    defaultShortcuts.insert("ActionWatchDwordQword", Shortcut("Actions","Watch DWORD/QWORD") );
    defaultShortcuts.insert("ActionCopyFileOffset", Shortcut("Actions","Copy File Offset") );
    defaultShortcuts.insert("ActionToggleRunTrace", Shortcut("Actions","Start/Stop trace recording") );

    defaultShortcuts.insert("ActionCopyCroppedTable", Shortcut("Actions","Copy -> Cropped Table") );
    defaultShortcuts.insert("ActionCopyTable", Shortcut("Actions","Copy -> Table") );
    defaultShortcuts.insert("ActionCopyLineToLog", Shortcut("Actions","Copy -> Line, To Log") );
    defaultShortcuts.insert("ActionCopyCroppedTableToLog", Shortcut("Actions","Copy -> Cropped Table, To Log") );
    defaultShortcuts.insert("ActionCopyTableToLog", Shortcut("Actions","Copy -> Table, To Log") );
    defaultShortcuts.insert("ActionExport", Shortcut("Actions","Copy -> Export Table") );
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
