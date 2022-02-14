
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int ,char const*,int *,int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(const char *VAR_5, const char *VAR_6, int VAR_7,
    enum lzc_send_flags VAR_8, uint64_t VAR_9, uint64_t VAR_10,
    const char *VAR_11)
{
 nvlist_t *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4();
 FUNC_1(VAR_12, "fd", VAR_7);
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_12, "fromsnap", VAR_6);
 if (VAR_8 & VAR_2)
  FUNC_0(VAR_12, "largeblockok");
 if (VAR_8 & VAR_1)
  FUNC_0(VAR_12, "embedok");
 if (VAR_8 & VAR_0)
  FUNC_0(VAR_12, "compressok");
 if (VAR_8 & VAR_3)
  FUNC_0(VAR_12, "rawok");
 if (VAR_9 != 0 || VAR_10 != 0) {
  FUNC_3(VAR_12, "resume_object", VAR_9);
  FUNC_3(VAR_12, "resume_offset", VAR_10);
 }
 if (VAR_11 != ((void*)0))
  FUNC_2(VAR_12, "redactbook", VAR_11);

 VAR_13 = FUNC_5(VAR_4, VAR_5, VAR_12, ((void*)0));
 FUNC_6(VAR_12);
 return (VAR_13);
}
