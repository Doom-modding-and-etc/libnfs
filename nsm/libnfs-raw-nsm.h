/*
Copyright (c) 2014, Ronnie Sahlberg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer. 
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies, 
either expressed or implied, of the FreeBSD Project.
*/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NSM_H_RPCGEN
#define _NSM_H_RPCGEN

#include <nfsc/libnfs-zdr.h>


#ifdef __cplusplus
extern "C" {
#endif

#define NSM_MAXSTRLEN 1024

enum nsmstat1 {
	NSM_STAT_SUCC = 0,
	NSM_STAT_FAIL = 1,
};
typedef enum nsmstat1 nsmstat1;

struct nsm_my_id {
	char *my_name;
	int my_prog;
	int my_vers;
	int my_proc;
};
typedef struct nsm_my_id nsm_my_id;

struct nsm_mon_id {
	char *mon_name;
	struct nsm_my_id my_id;
};
typedef struct nsm_mon_id nsm_mon_id;

struct NSM1_STATres {
	nsmstat1 res;
	int state;
};
typedef struct NSM1_STATres NSM1_STATres;

struct NSM1_STATargs {
	char *mon_name;
};
typedef struct NSM1_STATargs NSM1_STATargs;

struct NSM1_MONres {
	nsmstat1 res;
	int state;
};
typedef struct NSM1_MONres NSM1_MONres;

struct NSM1_MONargs {
	struct nsm_mon_id mon_id;
	char priv[16];
};
typedef struct NSM1_MONargs NSM1_MONargs;

struct NSM1_UNMONres {
	int state;
};
typedef struct NSM1_UNMONres NSM1_UNMONres;

struct NSM1_UNMONargs {
	struct nsm_mon_id mon_id;
};
typedef struct NSM1_UNMONargs NSM1_UNMONargs;

struct NSM1_UNMONALLres {
	int state;
};
typedef struct NSM1_UNMONALLres NSM1_UNMONALLres;

struct NSM1_UNMONALLargs {
	struct nsm_my_id my_id;
};
typedef struct NSM1_UNMONALLargs NSM1_UNMONALLargs;

struct NSM1_NOTIFYargs {
	char *mon_name;
	int state;
};
typedef struct NSM1_NOTIFYargs NSM1_NOTIFYargs;

#define NSM_PROGRAM 100024
#define NSM_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define NSM1_NULL 0
extern  void * nsm1_null_1(void *, void *);
extern  void * nsm1_null_1_svc(void *, struct svc_req *);
#define NSM1_STAT 1
extern  struct NSM1_STATres * nsm1_stat_1(struct NSM1_STATargs *, void *);
extern  struct NSM1_STATres * nsm1_stat_1_svc(struct NSM1_STATargs *, struct svc_req *);
#define NSM1_MON 2
extern  struct NSM1_MONres * nsm1_mon_1(struct NSM1_MONargs *, void *);
extern  struct NSM1_MONres * nsm1_mon_1_svc(struct NSM1_MONargs *, struct svc_req *);
#define NSM1_UNMON 3
extern  struct NSM1_UNMONres * nsm1_unmon_1(struct NSM1_UNMONargs *, void *);
extern  struct NSM1_UNMONres * nsm1_unmon_1_svc(struct NSM1_UNMONargs *, struct svc_req *);
#define NSM1_UNMON_ALL 4
extern  struct NSM1_UNMONALLres * nsm1_unmon_all_1(struct NSM1_UNMONALLargs *, void *);
extern  struct NSM1_UNMONALLres * nsm1_unmon_all_1_svc(struct NSM1_UNMONALLargs *, struct svc_req *);
#define NSM1_SIMU_CRASH 5
extern  void * nsm1_simu_crash_1(void *, void *);
extern  void * nsm1_simu_crash_1_svc(void *, struct svc_req *);
#define NSM1_NOTIFY 6
extern  void * nsm1_notify_1(struct NSM1_NOTIFYargs *, void *);
extern  void * nsm1_notify_1_svc(struct NSM1_NOTIFYargs *, struct svc_req *);
extern int nsm_program_1_freeresult (void *, zdrproc_t, caddr_t);

#else /* K&R C */
#define NSM1_NULL 0
extern  void * nsm1_null_1();
extern  void * nsm1_null_1_svc();
#define NSM1_STAT 1
extern  struct NSM1_STATres * nsm1_stat_1();
extern  struct NSM1_STATres * nsm1_stat_1_svc();
#define NSM1_MON 2
extern  struct NSM1_MONres * nsm1_mon_1();
extern  struct NSM1_MONres * nsm1_mon_1_svc();
#define NSM1_UNMON 3
extern  struct NSM1_UNMONres * nsm1_unmon_1();
extern  struct NSM1_UNMONres * nsm1_unmon_1_svc();
#define NSM1_UNMON_ALL 4
extern  struct NSM1_UNMONALLres * nsm1_unmon_all_1();
extern  struct NSM1_UNMONALLres * nsm1_unmon_all_1_svc();
#define NSM1_SIMU_CRASH 5
extern  void * nsm1_simu_crash_1();
extern  void * nsm1_simu_crash_1_svc();
#define NSM1_NOTIFY 6
extern  void * nsm1_notify_1();
extern  void * nsm1_notify_1_svc();
extern int nsm_program_1_freeresult ();
#endif /* K&R C */

/* the zdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  uint32_t zdr_nsmstat1 (ZDR *, nsmstat1*);
extern  uint32_t zdr_nsm_my_id (ZDR *, nsm_my_id*);
extern  uint32_t zdr_nsm_mon_id (ZDR *, nsm_mon_id*);
extern  uint32_t zdr_NSM1_STATres (ZDR *, NSM1_STATres*);
extern  uint32_t zdr_NSM1_STATargs (ZDR *, NSM1_STATargs*);
extern  uint32_t zdr_NSM1_MONres (ZDR *, NSM1_MONres*);
extern  uint32_t zdr_NSM1_MONargs (ZDR *, NSM1_MONargs*);
extern  uint32_t zdr_NSM1_UNMONres (ZDR *, NSM1_UNMONres*);
extern  uint32_t zdr_NSM1_UNMONargs (ZDR *, NSM1_UNMONargs*);
extern  uint32_t zdr_NSM1_UNMONALLres (ZDR *, NSM1_UNMONALLres*);
extern  uint32_t zdr_NSM1_UNMONALLargs (ZDR *, NSM1_UNMONALLargs*);
extern  uint32_t zdr_NSM1_NOTIFYargs (ZDR *, NSM1_NOTIFYargs*);

#else /* K&R C */
extern uint32_t zdr_nsmstat1 ();
extern uint32_t zdr_nsm_my_id ();
extern uint32_t zdr_nsm_mon_id ();
extern uint32_t zdr_NSM1_STATres ();
extern uint32_t zdr_NSM1_STATargs ();
extern uint32_t zdr_NSM1_MONres ();
extern uint32_t zdr_NSM1_MONargs ();
extern uint32_t zdr_NSM1_UNMONres ();
extern uint32_t zdr_NSM1_UNMONargs ();
extern uint32_t zdr_NSM1_UNMONALLres ();
extern uint32_t zdr_NSM1_UNMONALLargs ();
extern uint32_t zdr_NSM1_NOTIFYargs ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NSM_H_RPCGEN */
