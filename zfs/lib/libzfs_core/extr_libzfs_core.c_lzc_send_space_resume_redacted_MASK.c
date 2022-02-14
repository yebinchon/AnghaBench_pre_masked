
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
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,char const*,int *,int **) ;
 int FUNC_7 (int *) ;

int
FUNC_8(const char *VAR_5, const char *VAR_6,
    enum lzc_send_flags VAR_7, uint64_t VAR_8, uint64_t VAR_9,
    uint64_t VAR_10, const char *VAR_11, int VAR_12, uint64_t *VAR_13)
{
 nvlist_t *VAR_14;
 nvlist_t *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_4();
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_14, "from", VAR_6);
 if (VAR_7 & VAR_2)
  FUNC_0(VAR_14, "largeblockok");
 if (VAR_7 & VAR_1)
  FUNC_0(VAR_14, "embedok");
 if (VAR_7 & VAR_0)
  FUNC_0(VAR_14, "compressok");
 if (VAR_7 & VAR_3)
  FUNC_0(VAR_14, "rawok");
 if (VAR_8 != 0 || VAR_9 != 0) {
  FUNC_3(VAR_14, "resume_object", VAR_8);
  FUNC_3(VAR_14, "resume_offset", VAR_9);
  FUNC_3(VAR_14, "bytes", VAR_10);
 }
 if (VAR_11 != ((void*)0))
  FUNC_2(VAR_14, "redactbook", VAR_11);
 if (VAR_12 != -1)
  FUNC_1(VAR_14, "fd", VAR_12);

 VAR_16 = FUNC_6(VAR_4, VAR_5, VAR_14, &VAR_15);
 FUNC_7(VAR_14);
 if (VAR_16 == 0)
  *VAR_13 = FUNC_5(VAR_15, "space");
 FUNC_7(VAR_15);
 return (VAR_16);
}
