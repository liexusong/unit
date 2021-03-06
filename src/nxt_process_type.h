
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) NGINX, Inc.
 */

#ifndef _NXT_PROCESS_TYPE_H_INCLUDED_
#define _NXT_PROCESS_TYPE_H_INCLUDED_


typedef enum {
    NXT_PROCESS_SINGLE = 0,
    NXT_PROCESS_MAIN,
    NXT_PROCESS_DISCOVERY,
    NXT_PROCESS_CONTROLLER,
    NXT_PROCESS_ROUTER,
    NXT_PROCESS_WORKER,

    NXT_PROCESS_MAX,
} nxt_process_type_t;


#endif /* _NXT_PROCESS_TYPE_H_INCLUDED_ */
