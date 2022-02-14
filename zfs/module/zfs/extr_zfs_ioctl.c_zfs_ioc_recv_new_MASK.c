
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint64_t ;
typedef int uchar_t ;
typedef int nvlist_t ;
typedef int dmu_replay_record_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int **,int*) ;
 int FUNC_9 (int *,char*,int*) ;
 int FUNC_10 (int *,char*,int **) ;
 int FUNC_11 (int *,char*,char**) ;
 int FUNC_12 (int *,char*,int *) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,char*,int *,int *,int *,int ,int ,int,int *,int,int *,int *,int *,int **) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_4, nvlist_t *VAR_5, nvlist_t *VAR_6)
{
 dmu_replay_record_t *VAR_7;
 uint_t VAR_8;
 nvlist_t *VAR_9 = ((void*)0);
 nvlist_t *VAR_10 = ((void*)0);
 nvlist_t *VAR_11 = ((void*)0);
 nvlist_t *VAR_12 = ((void*)0);
 char *VAR_13;
 char *VAR_14 = ((void*)0);
 char *VAR_15;
 char VAR_16[VAR_2];
 boolean_t VAR_17;
 boolean_t VAR_18;
 uint64_t VAR_19 = 0;
 uint64_t VAR_20 = 0;
 uint64_t VAR_21 = 0;
 int VAR_22 = -1;
 int VAR_23 = -1;
 int VAR_24;

 VAR_13 = FUNC_5(VAR_5, "snapname");

 if (FUNC_1(VAR_13, ((void*)0), ((void*)0)) != 0 ||
     FUNC_13(VAR_13, '@') == ((void*)0) ||
     FUNC_13(VAR_13, '%'))
  return (FUNC_0(VAR_0));

 (void) FUNC_14(VAR_16, VAR_13);
 VAR_15 = FUNC_13(VAR_16, '@');
 *VAR_15++ = '\0';

 VAR_24 = FUNC_11(VAR_5, "origin", &VAR_14);
 if (VAR_24 && VAR_24 != VAR_1)
  return (VAR_24);

 VAR_24 = FUNC_8(VAR_5, "begin_record",
     (uchar_t **)&VAR_7, &VAR_8);
 if (VAR_24 != 0 || VAR_8 != sizeof (*VAR_7))
  return (FUNC_0(VAR_0));

 VAR_22 = FUNC_4(VAR_5, "input_fd");

 VAR_17 = FUNC_6(VAR_5, "force");
 VAR_18 = FUNC_6(VAR_5, "resumable");

 VAR_24 = FUNC_9(VAR_5, "cleanup_fd", &VAR_23);
 if (VAR_24 && VAR_24 != VAR_1)
  return (VAR_24);

 VAR_24 = FUNC_12(VAR_5, "action_handle", &VAR_19);
 if (VAR_24 && VAR_24 != VAR_1)
  return (VAR_24);


 VAR_24 = FUNC_10(VAR_5, "props", &VAR_10);
 if (VAR_24 && VAR_24 != VAR_1)
  return (VAR_24);

 VAR_24 = FUNC_10(VAR_5, "localprops", &VAR_11);
 if (VAR_24 && VAR_24 != VAR_1)
  return (VAR_24);

 VAR_24 = FUNC_10(VAR_5, VAR_3, &VAR_12);
 if (VAR_24 && VAR_24 != VAR_1)
  return (VAR_24);

 VAR_24 = FUNC_15(VAR_16, VAR_15, VAR_14, VAR_10, VAR_11,
     VAR_12, VAR_17, VAR_18, VAR_22, VAR_7, VAR_23,
     &VAR_20, &VAR_21, &VAR_19, &VAR_9);

 FUNC_3(VAR_6, "read_bytes", VAR_20);
 FUNC_3(VAR_6, "error_flags", VAR_21);
 FUNC_3(VAR_6, "action_handle", VAR_19);
 FUNC_2(VAR_6, "errors", VAR_9);

 FUNC_7(VAR_9);
 FUNC_7(VAR_10);
 FUNC_7(VAR_11);

 return (VAR_24);
}
