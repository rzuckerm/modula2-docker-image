extern "C" void exit(int);

extern "C" void RTExceptions_DefaultErrorCatch(void);
extern "C" void _M2_Storage_init (int argc, char *argv[]);
extern "C" void _M2_Storage_finish (void);
extern "C" void _M2_SYSTEM_init (int argc, char *argv[]);
extern "C" void _M2_SYSTEM_finish (void);
extern "C" void _M2_M2RTS_init (int argc, char *argv[]);
extern "C" void _M2_M2RTS_finish (void);
extern "C" void _M2_RTExceptions_init (int argc, char *argv[]);
extern "C" void _M2_RTExceptions_finish (void);
extern "C" void _M2_ASCII_init (int argc, char *argv[]);
extern "C" void _M2_ASCII_finish (void);
extern "C" void _M2_Debug_init (int argc, char *argv[]);
extern "C" void _M2_Debug_finish (void);
extern "C" void _M2_SysStorage_init (int argc, char *argv[]);
extern "C" void _M2_SysStorage_finish (void);
extern "C" void _M2_StrLib_init (int argc, char *argv[]);
extern "C" void _M2_StrLib_finish (void);
extern "C" void _M2_Indexing_init (int argc, char *argv[]);
extern "C" void _M2_Indexing_finish (void);
extern "C" void _M2_termios_init (int argc, char *argv[]);
extern "C" void _M2_termios_finish (void);
extern "C" void _M2_FIO_init (int argc, char *argv[]);
extern "C" void _M2_FIO_finish (void);
extern "C" void _M2_errno_init (int argc, char *argv[]);
extern "C" void _M2_errno_finish (void);
extern "C" void _M2_IO_init (int argc, char *argv[]);
extern "C" void _M2_IO_finish (void);
extern "C" void _M2_StdIO_init (int argc, char *argv[]);
extern "C" void _M2_StdIO_finish (void);
extern "C" void _M2_M2EXCEPTION_init (int argc, char *argv[]);
extern "C" void _M2_M2EXCEPTION_finish (void);
extern "C" void _M2_SysExceptions_init (int argc, char *argv[]);
extern "C" void _M2_SysExceptions_finish (void);
extern "C" void _M2_StrIO_init (int argc, char *argv[]);
extern "C" void _M2_StrIO_finish (void);
extern "C" void _M2_NumberIO_init (int argc, char *argv[]);
extern "C" void _M2_NumberIO_finish (void);
extern "C" void _M2_PrintHelloWorld_init (int argc, char *argv[]);
extern "C" void _M2_PrintHelloWorld_finish (void);

extern "C" void M2RTS_ExecuteTerminationProcedures(void);

extern "C" void M2RTS_ExecuteInitialProcedures(void);

static void init (int argc, char *argv[])
{
   try {
       _M2_Storage_init (argc, argv);
       _M2_SYSTEM_init (argc, argv);
       _M2_M2RTS_init (argc, argv);
       _M2_RTExceptions_init (argc, argv);
       _M2_ASCII_init (argc, argv);
       _M2_Debug_init (argc, argv);
       _M2_SysStorage_init (argc, argv);
       _M2_StrLib_init (argc, argv);
       _M2_Indexing_init (argc, argv);
       _M2_termios_init (argc, argv);
       _M2_FIO_init (argc, argv);
       _M2_errno_init (argc, argv);
       _M2_IO_init (argc, argv);
       _M2_StdIO_init (argc, argv);
       _M2_M2EXCEPTION_init (argc, argv);
       _M2_SysExceptions_init (argc, argv);
       _M2_StrIO_init (argc, argv);
       _M2_NumberIO_init (argc, argv);
      M2RTS_ExecuteInitialProcedures ();
       _M2_PrintHelloWorld_init (argc, argv);
    }
    catch (...) {
       RTExceptions_DefaultErrorCatch();
    }
}

static void finish (void)
{
   try {
      M2RTS_ExecuteTerminationProcedures ();
      _M2_PrintHelloWorld_finish ();
      _M2_NumberIO_finish ();
      _M2_StrIO_finish ();
      _M2_SysExceptions_finish ();
      _M2_M2EXCEPTION_finish ();
      _M2_StdIO_finish ();
      _M2_IO_finish ();
      _M2_errno_finish ();
      _M2_FIO_finish ();
      _M2_termios_finish ();
      _M2_Indexing_finish ();
      _M2_StrLib_finish ();
      _M2_SysStorage_finish ();
      _M2_Debug_finish ();
      _M2_ASCII_finish ();
      _M2_RTExceptions_finish ();
      _M2_M2RTS_finish ();
      _M2_SYSTEM_finish ();
      _M2_Storage_finish ();
      exit (0);
    }
    catch (...) {
       RTExceptions_DefaultErrorCatch();
    }
}

int main (int argc, char *argv[])
{
   init (argc, argv);
   finish ();
   return (0);
}
