#ifndef __LOG_DEBUG_H__
#define __LOG_DEBUG_H__


/* When the C++ compiler is in use, __cplusplus is defined */
#ifdef __cplusplus
#define FUNC __PRETTY_FUNCTION__
#else
#define FUNC __FUNCTION__
#endif /* __cplusplus */


#ifdef  DEBUG
/* file:line:function: */
#define LOG_DEBUG(fmt, ...) printf("%s:%d:%s: " fmt, \
        __FILE__, __LINE__, FUNC, ##__VA_ARGS__)
#else
#define LOG_DEBUG(fmt, ...)
#endif /* DEBUG */

#endif /* __LOG_DEBUG_H__ */
