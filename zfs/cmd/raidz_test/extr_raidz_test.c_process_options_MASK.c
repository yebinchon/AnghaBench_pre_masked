
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long rto_ashift; unsigned long long rto_offset; unsigned long long rto_dcols; unsigned long long rto_dsize; size_t rto_sweep_timeout; int rto_sweep; int rto_benchmark; int rto_gdb; int rto_sanity; int rto_v; } ;
typedef TYPE_1__ raidz_test_opts_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,size_t) ;
 unsigned long long FUNC_1 (int,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 size_t FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(int VAR_7, char **VAR_8)
{
 size_t VAR_9;
 int VAR_10;

 raidz_test_opts_t *VAR_11 = &VAR_5;

 FUNC_2(&VAR_6, VAR_11, sizeof (*VAR_11));

 while ((VAR_10 = FUNC_3(VAR_7, VAR_8, "TDBSvha:o:d:s:t:")) != -1) {
  VAR_9 = 0;

  switch (VAR_10) {
  case 'a':
   VAR_9 = FUNC_4(VAR_4, ((void*)0), 0);
   VAR_11->rto_ashift = FUNC_1(13, FUNC_0(9, VAR_9));
   break;
  case 'o':
   VAR_9 = FUNC_4(VAR_4, ((void*)0), 0);
   VAR_11->rto_offset = ((1ULL << FUNC_1(12, VAR_9)) >> 9) << 9;
   break;
  case 'd':
   VAR_9 = FUNC_4(VAR_4, ((void*)0), 0);
   VAR_11->rto_dcols = FUNC_1(255, FUNC_0(1, VAR_9));
   break;
  case 's':
   VAR_9 = FUNC_4(VAR_4, ((void*)0), 0);
   VAR_11->rto_dsize = 1ULL << FUNC_1(VAR_2,
       FUNC_0(VAR_3, VAR_9));
   break;
  case 't':
   VAR_9 = FUNC_4(VAR_4, ((void*)0), 0);
   VAR_11->rto_sweep_timeout = VAR_9;
   break;
  case 'v':
   VAR_11->rto_v++;
   break;
  case 'S':
   VAR_11->rto_sweep = 1;
   break;
  case 'B':
   VAR_11->rto_benchmark = 1;
   break;
  case 'D':
   VAR_11->rto_gdb = 1;
   break;
  case 'T':
   VAR_11->rto_sanity = 1;
   break;
  case 'h':
   FUNC_5(VAR_1);
   break;
  case '?':
  default:
   FUNC_5(VAR_0);
   break;
  }
 }
}
