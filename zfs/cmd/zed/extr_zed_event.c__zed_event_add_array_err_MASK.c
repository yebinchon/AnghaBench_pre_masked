
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_1(uint64_t VAR_3, const char *VAR_4)
{
 VAR_2 = VAR_0;
 FUNC_0(VAR_1,
     "Failed to convert nvpair \"%s\" for eid=%llu: "
     "Exceeded buffer size", VAR_4, VAR_3);
 return (-1);
}
