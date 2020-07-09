#ifndef __TS_ENVIRO_H
#define __TS_ENVIRO_H

#ifdef TS_MASTER

	const char * _TessyEnvironment[] = {
	"Mode", NULL,
	"TestobjectBreakpoint", NULL,
	"TestobjectId", "1029",
	"PROJECTROOT", "C:\\Users\\Sowjanya\\Projects\\TESSY\\stub_example",
	"ASAP File", "",
	"ASAP Module", "",
	"ASAP Project", "",
	"Alternate Breakpoint", "",
	"Batchtest Wait Time", "0",
	"Buffer Size", "10240",
	"Call Count Size", "8",
	"Check Call Trace Size", "",
	"Check Driver Layers", "",
	"Collect All Enums", "0",
	"Collect const Variables", "0",
	"Comm Buffer Integrity", "0",
	"Comm Checksum", "0",
	"Comm File Compression", "0",
	"Comm Transfer Limit", "0",
	"Compiler", "GNU GCC",
	"Compiler Call", "gcc $(Compiler Dialect) -c $(USEROPTIONS) -DTESSY -o $(OUTPUT) $(INPUT)",
	"Compiler Commandline", "",
	"Compiler Concurrency", "0",
	"Compiler Defines", "",
	"Compiler Dialect", "",
	"Compiler Id", "0x01",
	"Compiler Includes", "",
	"Compiler Install Path", "C:\\PROGRA~1\\Razorcat\\Shared\\1.3\\msys32",
	"Compiler Version", "",
	"Component Test", "0",
	"Constructor Exclude List", "",
	"Conversion DLL", "none",
	"Declare Constructors List", "",
	"Default Call Trace Evaluation", "Ignore Call Trace",
	"Defines Exclude List", "*TESSY*, unix, _*, *i386*, *X86*, WIN32, WINNT",
	"Deleted Constructors List", "",
	"Display Name", "GNU GCC --- Eclipse CDT - (Default)",
	"Doxygen Executable", "",
	"Doxygen Input Encoding", "UTF-8",
	"Duplicated Defines Header", "",
	"Enable ASAP", "0",
	"Enable C0 Coverage", "1",
	"Enable C1 Coverage", "1",
	"Enable C99", "1",
	"Enable CLANG", "1",
	"Enable Collect Implicit Constructors", "1",
	"Enable Create Default Constructors", "1",
	"Enable Create Function Stubs", "0",
	"Enable Create Method Stubs", "1",
	"Enable DC Coverage", "1",
	"Enable Define Variables", "1",
	"Enable Doxygen", "0",
	"Enable EPC Coverage", "1",
	"Enable Exceptions", "1",
	"Enable FC Coverage", "1",
	"Enable Inline Functions", "1",
	"Enable MC/DC Coverage", "1",
	"Enable MCC Coverage", "1",
	"Enable Static Functions", "1",
	"Enable Static Locals", "1",
	"Enable User Includes", "0",
	"Enable const As IN", "0",
	"Enable setjmp/longjmp", "0",
	"Endianess", "-",
	"Enum Exclude List", "",
	"Enum Include List", "",
	"Environment", "(Default)",
	"ExeFile Extension", ".exe",
	"Execute Testcases Separately", "0",
	"Execution Mode", "0x02",
	"Execution Timeout", "0",
	"Execution Timeout Call", "",
	"Float Eval Epsilon", "1.0E-6",
	"Float Precision", "-1",
	"Function Stub Exclude List", "",
	"Generate Constructors", "1",
	"Generate Parameter Proxies", "0",
	"Header File Exclude List", "",
	"Header File Include List", "",
	"Hide Functions", "0",
	"Init Code", "",
	"Init Definitions", "",
	"Insert External Stub At Declaration", "0",
	"Instrumenter Header Exclude List", "",
	"Linker Options", "",
	"MISRA Do While Expressions", "0U, false",
	"Main Type", "0x11",
	"Make Call", "+C:/Users/Sowjanya/Projects/TESSY/STUB_E~1/tessy\\work\\00000401\\00000403\\00000404\\00000405:@:mingw32-make.exe --silent  -f",
	"Make Command", "mingw32-make.exe",
	"Make Options", "",
	"Make Use One Shell", "0",
	"Makefile Template", "C:\\PROGRA~1\\Razorcat\\TESSY_4.2\\sys\\templates\\make\\ts_make_socket.tpl",
	"Master Call", "C:/Users/Sowjanya/Projects/TESSY/STUB_E~1/tessy\\work\\00000401\\00000403\\00000404\\00000405\\ts_add_m.exe",
	"Method Stub Exclude List", "",
	"Minimum C0 Coverage", "100",
	"Minimum C1 Coverage", "100",
	"Minimum DC Coverage", "100",
	"Minimum EPC Coverage", "100",
	"Minimum FC Coverage", "100",
	"Minimum MC/DC Coverage", "100",
	"Minimum MCC Coverage", "100",
	"ObjFile Extension", ".o",
	"Parser Options", "",
	"Preprocessor Call", "gcc.exe $(Compiler Dialect) -E -DTESSY -o $(OUTPUT) $(INPUT)",
	"Relative Path Variables", "",
	"Scanner Call", "sh.exe tks.sh gcc",
	"Slave Call", "",
	"TKS Template File", "C:\\PROGRA~1\\Razorcat\\TESSY_4.2\\sys\\templates\\tks\\tks-gnu.tpl",
	"Target", "Eclipse CDT",
	"Target Concurrency", "0",
	"Target Id", "0x25",
	"Target Install Path", "",
	"Target Version", "",
	"Test Object Exclude List", "",
	"Test Object Include List", "",
	"Time Unit", "cycles",
	"Timer Enabled", "0",
	"Timer File", "C:\\PROGRA~1\\Razorcat\\TESSY_4.2\\sys\\src\\comm\\ts_timer_gcc.c",
	"Timer Prescale", "0",
	"Timer Resolution", "1.0",
	"Type Exclude List", "",
	"Type Include List", "",
	"Type Table File", "C:\\PROGRA~1\\Razorcat\\TESSY_4.2\\sys\\compiler\\typetables\\ts_gcc_i386_typetable.xml",
	"Unit Test", "1",
	"Use Alias Names", "0",
	"Variable Exclude List", "",
	"MODULEPATH", "C:/Users/Sowjanya/Projects/TESSY/STUB_E~1/tessy\\work\\00000401\\00000403\\00000404\\00000405",
	"PROJECT", "no-name",
	"MODULE", "New Module",
	"TESTOBJECT", "add",
	"Binary", "C:/Users/Sowjanya/Projects/TESSY/STUB_E~1/tessy\\work\\00000401\\00000403\\00000404\\00000405\\ts_add_s.exe",
	"ModulePath", "C:/Users/Sowjanya/Projects/TESSY/STUB_E~1/tessy\\work\\00000401\\00000403\\00000404\\00000405",
	"SizeOfDouble", "64",
	NULL, NULL};

	TESSY_uint32 TS_CommTransferLimit;

	TESSY_int16 CheckDriverLayers;

	TESSY_int8 GenerateBuiltinData;

	TESSY_int8 TS_CommCompress;

	TESSY_int8 TS_CommChecksum;

extern "C" {

	int8 check_tslow_connect(const char **) {}

	void TESSY_CDL_receiveCallTrace(void) {}

}

#endif

#endif /* __TS_ENVIRO_H */
