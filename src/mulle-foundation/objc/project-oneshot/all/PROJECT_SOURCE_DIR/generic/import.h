/* DOS:   #import this files in public headers
 *
 * DONTS: #import this file in private headers
 *        #import this files directly in sources
 *        #include this file anywhere
 *
 * This is a central include file to keep dependencies out of the library
 *  Objective-C files. It is usally imported by Objective-C .h files only.
 *  .m and .aam use import-private.h.
 */

/*
 * Get C includes first. As "include.h" is a generic name,
 * testing could pick up the wrong one, so we test for an inferior header
 * that we assume to be there if "include.h" were to exist.
 */
#ifdef __has_include
# if __has_include( "_<|PROJECT_NAME|>-include.h")
#   include "include.h"
# endif
#endif

#ifndef <|PROJECT_UPCASE_IDENTIFIER|>_GLOBAL
# ifdef <|PROJECT_UPCASE_IDENTIFIER|>_BUILD
#  define <|PROJECT_UPCASE_IDENTIFIER|>_GLOBAL    MULLE_C_GLOBAL
# else
#  if defined( <|PROJECT_UPCASE_IDENTIFIER|>_INCLUDE_DYNAMIC) || (defined( MULLE_INCLUDE_DYNAMIC) && ! defined( <|PROJECT_UPCASE_IDENTIFIER|>_INCLUDE_STATIC))
#   define <|PROJECT_UPCASE_IDENTIFIER|>_GLOBAL   MULLE_C_GLOBAL
#  else
#   define <|PROJECT_UPCASE_IDENTIFIER|>_GLOBAL   extern
#  endif
# endif
#endif

/* Include the header file automatically generated by mulle-sourcetree-to-c.
   Here the prefix is harmless and serves disambiguation. If you have no
   sourcetree, then you don't need it.
 */

#import "_<|PROJECT_NAME|>-import.h"

/* You can add some more import statements here */

