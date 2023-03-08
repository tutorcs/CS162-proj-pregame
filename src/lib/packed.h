https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef __LIB_PACKED_H
#define __LIB_PACKED_H

/* The "packed" attribute, when applied to a structure, prevents
   GCC from inserting padding bytes between or after structure
   members.  It must be specified at the time of the structure's
   definition, normally just after the closing brace. */
#define PACKED __attribute__((packed))

#endif /* lib/packed.h */
