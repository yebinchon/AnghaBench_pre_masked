
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {char* member_0; size_t member_1; char const* data; } ;
typedef int iconv_t ;


 scalar_t__ FUNC_0 (int ,struct buffer*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,size_t) ;

const char *
FUNC_3(iconv_t VAR_0, const char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_1, VAR_2);
 struct buffer VAR_4 = { VAR_3, VAR_2 };
 const char *VAR_5 = VAR_4.data && FUNC_0(VAR_0, &VAR_4) ? VAR_4.data : VAR_1;

 FUNC_1(VAR_3);
 return VAR_5 == VAR_3 ? VAR_1 : VAR_5;
}
