
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ub_checkpoint_txg; int ub_rootbp; scalar_t__ ub_mmp_config; scalar_t__ ub_mmp_delay; scalar_t__ ub_mmp_magic; scalar_t__ ub_timestamp; scalar_t__ ub_guid_sum; scalar_t__ ub_txg; scalar_t__ ub_version; scalar_t__ ub_magic; } ;
typedef TYPE_1__ uberblock_t ;
typedef char const* u_longlong_t ;
typedef scalar_t__ time_t ;
typedef int blkbuf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int* VAR_1 ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_11(uberblock_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 time_t VAR_5 = VAR_2->ub_timestamp;

 (void) FUNC_9("%s", VAR_3 ? VAR_3 : "");
 (void) FUNC_9("\tmagic = %016llx\n", (u_longlong_t)VAR_2->ub_magic);
 (void) FUNC_9("\tversion = %llu\n", (u_longlong_t)VAR_2->ub_version);
 (void) FUNC_9("\ttxg = %llu\n", (u_longlong_t)VAR_2->ub_txg);
 (void) FUNC_9("\tguid_sum = %llu\n", (u_longlong_t)VAR_2->ub_guid_sum);
 (void) FUNC_9("\ttimestamp = %llu UTC = %s",
     (u_longlong_t)VAR_2->ub_timestamp, FUNC_7(FUNC_8(&VAR_5)));

 (void) FUNC_9("\tmmp_magic = %016llx\n",
     (u_longlong_t)VAR_2->ub_mmp_magic);
 if (FUNC_6(VAR_2)) {
  (void) FUNC_9("\tmmp_delay = %0llu\n",
      (u_longlong_t)VAR_2->ub_mmp_delay);
  if (FUNC_5(VAR_2))
   (void) FUNC_9("\tmmp_seq = %u\n",
       (unsigned int) FUNC_4(VAR_2));
  if (FUNC_1(VAR_2))
   (void) FUNC_9("\tmmp_fail = %u\n",
       (unsigned int) FUNC_0(VAR_2));
  if (FUNC_3(VAR_2))
   (void) FUNC_9("\tmmp_write = %u\n",
       (unsigned int) FUNC_2(VAR_2));

  (void) FUNC_9("\tmmp_valid = %x\n",
      (unsigned int) VAR_2->ub_mmp_config & 0xFF);
 }

 if (VAR_1['u'] >= 4) {
  char VAR_6[VAR_0];
  FUNC_10(VAR_6, sizeof (VAR_6), &VAR_2->ub_rootbp);
  (void) FUNC_9("\trootbp = %s\n", VAR_6);
 }
 (void) FUNC_9("\tcheckpoint_txg = %llu\n",
     (u_longlong_t)VAR_2->ub_checkpoint_txg);
 (void) FUNC_9("%s", VAR_4 ? VAR_4 : "");
}
