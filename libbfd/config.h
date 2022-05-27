/* config.h.  Generated from config.in by configure.  */
/* config.in.  Generated from configure.ac by autoheader.  */

/* Check that config.h is #included before system headers
    (this works only for glibc, but that should be enough).  */
#if defined(__GLIBC__) && !defined(__FreeBSD_kernel__) && !defined(__CONFIG_H__)
#  error config.h must be #included before system headers
#endif
#define __CONFIG_H__ 1

/* Name of host specific core header file to include in elf.c. */
/* #undef CORE_HEADER */

/* Define to 1 if you want to enable -z separate-code in ELF linker by
   default. */
#define DEFAULT_LD_Z_SEPARATE_CODE 0

/* Define if you want run-time sanity checks. */
/* #undef ENABLE_CHECKING */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 0

/* Define to 1 if you have the declaration of `asprintf', and to 0 if you
   don't. */
#define HAVE_DECL_ASPRINTF 1

/* Define to 1 if you have the declaration of `basename', and to 0 if you
   don't. */
#define HAVE_DECL_BASENAME 1

/* Define to 1 if you have the declaration of `ffs', and to 0 if you don't. */
#define HAVE_DECL_FFS 1

/* Define to 1 if you have the declaration of `fopen64', and to 0 if you
   don't. */
#define HAVE_DECL_FOPEN64 0

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#define HAVE_DECL_FSEEKO 1

/* Define to 1 if you have the declaration of `fseeko64', and to 0 if you
   don't. */
#define HAVE_DECL_FSEEKO64 0

/* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
   */
#define HAVE_DECL_FTELLO 1

/* Define to 1 if you have the declaration of `ftello64', and to 0 if you
   don't. */
#define HAVE_DECL_FTELLO64 0

/* Define to 1 if you have the declaration of `stpcpy', and to 0 if you don't.
   */
#define HAVE_DECL_STPCPY 1

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `vasprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VASPRINTF 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 0

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdopen' function. */
#define HAVE_FDOPEN 1

/* Define to 1 if you have the `fileno' function. */
#define HAVE_FILENO 1

/* Define to 1 if you have the `fls' function. */
#define HAVE_FLS 1

/* Define to 1 if you have the `fopen64' function. */
/* #undef HAVE_FOPEN64 */

/* Define to 1 if you have the `fseeko' function. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fseeko64' function. */
/* #undef HAVE_FSEEKO64 */

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* Define to 1 if you have the `ftello64' function. */
/* #undef HAVE_FTELLO64 */

/* Define to 1 if you have the `getgid' function. */
#define HAVE_GETGID 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 0

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define if your compiler supports hidden visibility. */
/* #undef HAVE_HIDDEN */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <sys/procfs.h> has lwpstatus_t. */
/* #undef HAVE_LWPSTATUS_T */

/* Define if <sys/procfs.h> has lwpstatus_t.pr_context. */
/* #undef HAVE_LWPSTATUS_T_PR_CONTEXT */

/* Define if <sys/procfs.h> has lwpstatus_t.pr_fpreg. */
/* #undef HAVE_LWPSTATUS_T_PR_FPREG */

/* Define if <sys/procfs.h> has lwpstatus_t.pr_reg. */
/* #undef HAVE_LWPSTATUS_T_PR_REG */

/* Define if <sys/procfs.h> has lwpxstatus_t. */
/* #undef HAVE_LWPXSTATUS_T */

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 0

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define if <sys/procfs.h> has prpsinfo32_t. */
/* #undef HAVE_PRPSINFO32_T */

/* Define if <sys/procfs.h> has prpsinfo32_t.pr_pid. */
/* #undef HAVE_PRPSINFO32_T_PR_PID */

/* Define if <sys/procfs.h> has prpsinfo_t. */
/* #undef HAVE_PRPSINFO_T */

/* Define if <sys/procfs.h> has prpsinfo_t.pr_pid. */
/* #undef HAVE_PRPSINFO_T_PR_PID */

/* Define if <sys/procfs.h> has prstatus32_t. */
/* #undef HAVE_PRSTATUS32_T */

/* Define if <sys/procfs.h> has prstatus32_t.pr_who. */
/* #undef HAVE_PRSTATUS32_T_PR_WHO */

/* Define if <sys/procfs.h> has prstatus_t. */
/* #undef HAVE_PRSTATUS_T */

/* Define if <sys/procfs.h> has prstatus_t.pr_who. */
/* #undef HAVE_PRSTATUS_T_PR_WHO */

/* Define if <sys/procfs.h> has psinfo32_t. */
/* #undef HAVE_PSINFO32_T */

/* Define if <sys/procfs.h> has psinfo32_t.pr_pid. */
/* #undef HAVE_PSINFO32_T_PR_PID */

/* Define if <sys/procfs.h> has psinfo_t. */
/* #undef HAVE_PSINFO_T */

/* Define if <sys/procfs.h> has psinfo_t.pr_pid. */
/* #undef HAVE_PSINFO_T_PR_PID */

/* Define if <sys/procfs.h> has pstatus32_t. */
/* #undef HAVE_PSTATUS32_T */

/* Define if <sys/procfs.h> has pstatus_t. */
/* #undef HAVE_PSTATUS_T */

/* Define if <sys/procfs.h> has pxstatus_t. */
/* #undef HAVE_PXSTATUS_T */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if struct core_dumpx has member c_impl */
/* #undef HAVE_ST_C_IMPL */

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/procfs.h> header file. */
#define HAVE_SYS_PROCFS_H 0

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 0

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 0

/* Define if <sys/procfs.h> has win32_pstatus_t. */
#define HAVE_WIN32_PSTATUS_T 1

/* Define to 1 if you have the <windows.h> header file. */
#define HAVE_WINDOWS_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "bfd"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "bfd"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "bfd 2.38"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "bfd"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.38"

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Name of host specific header file to include in trad-core.c. */
/* #undef TRAD_HEADER */

/* Define if 64-bit archives should always be used. */
/* #undef USE_64_BIT_ARCHIVE */

/* Use b modifier when opening binary files? */
#define USE_BINARY_FOPEN 1

/* Define if we should use leading underscore on 64 bit mingw targets */
/* #undef USE_MINGW64_LEADING_UNDERSCORES */

/* Use mmap if it's available? */
/* #undef USE_MMAP */

/* Define if we should default to creating read-only plt entries */
#define USE_SECUREPLT 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "2.38"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Use structured /proc on Solaris. */
#define _STRUCTURED_PROC 1

#define COFF_WITH_PE

#ifndef DEBUGDIR
#define DEBUGDIR "."
#endif
#ifndef LIBDIR
#define LIBDIR "."
#endif
#ifndef BINDIR
#define BINDIR "."
#endif

#ifndef MAX_PATH
#define MAX_PATH 260
#endif