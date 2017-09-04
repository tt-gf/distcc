
#define TEMPLATE_VARNAME(_filename_) \
  AS_STRING\
(maps/_filename_.tpl.varnames.h)

#define ILLFORMED(_filename_,(x)) \
  AS_STRING(maps/_filename_.tpl.varnames.h, NOTHANDLED(_filename_))

// #define BEHINDCOMMENT(x) x + x

#define AS_STRING(x)   AS_STRING_INTERNAL(x)
#define AS_STRING_INTERNAL(x)   #x

#define MULTI(a, b, c) a + b + c

#define BOOST_PP_CAT(a, b) BOOST_PP_CAT_I(a, b)

#include TEMPLATE_VARNAME(foo)
