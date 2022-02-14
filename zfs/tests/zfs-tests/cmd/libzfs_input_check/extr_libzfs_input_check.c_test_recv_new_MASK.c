
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uchar_t ;
typedef int ssize_t ;
typedef int snapshot ;
typedef int nvlist_t ;
typedef int drr ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ dmu_replay_record_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,char*,int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 char* VAR_7 ;
 int FUNC_12 (int,TYPE_1__*,int,int ) ;
 int * VAR_8 ;
 int FUNC_13 (char*,int,char*,char const*) ;
 int VAR_9 ;
 char* FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_10, int VAR_11)
{
 dmu_replay_record_t VAR_12 = { 0 };
 nvlist_t *VAR_13 = FUNC_8();
 nvlist_t *VAR_14 = FUNC_8();
 nvlist_t *VAR_15 = FUNC_8();
 char VAR_16[VAR_1 + 32];
 ssize_t VAR_17;

 int VAR_18 = FUNC_11(VAR_3, VAR_2);

 (void) FUNC_13(VAR_16, sizeof (VAR_16), "%s@replicant", VAR_10);

 VAR_17 = FUNC_12(VAR_11, &VAR_12, sizeof (VAR_12), 0);
 if (VAR_17 != sizeof (VAR_12)) {
  (void) FUNC_9(VAR_9, "could not read stream: %s\n",
      FUNC_14(VAR_6));
 }

 FUNC_6(VAR_13, "snapname", VAR_16);
 FUNC_3(VAR_13, "begin_record", (uchar_t *)&VAR_12,
     sizeof (VAR_12));
 FUNC_4(VAR_13, "input_fd", VAR_11);

 FUNC_6(VAR_15, "org.openzfs:launch", "September 17th, 2013");
 FUNC_5(VAR_14, "localprops", VAR_15);
 FUNC_2(VAR_14, "force");
 FUNC_4(VAR_14, "cleanup_fd", VAR_18);
 FUNC_0(VAR_4, VAR_10, VAR_13, VAR_14, VAR_0);

 FUNC_10(VAR_15);
 FUNC_10(VAR_14);
 FUNC_10(VAR_13);

 (void) FUNC_1(VAR_18);
}
