
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int errbuf ;
struct TYPE_6__ {int err; } ;
struct TYPE_5__ {unsigned long errcode; int * ssl; } ;
typedef TYPE_1__ SSLConnection ;
typedef TYPE_2__ Connection ;


 char* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int,char*,unsigned long) ;
 char const* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static const char *
FUNC_5(Connection *VAR_0)
{
 SSLConnection *VAR_1 = (SSLConnection *) VAR_0;
 const char *VAR_2;
 static char VAR_3[32];
 int VAR_4 = VAR_0->err;
 unsigned long VAR_5 = VAR_1->errcode;


 VAR_0->err = 0;
 VAR_1->errcode = 0;

 if (((void*)0) != VAR_1->ssl)
 {
  int VAR_6 = FUNC_2(VAR_1->ssl, VAR_4);

  switch (VAR_6)
  {
   case 136:
   case 135:

    break;
   case 128:
    return "SSL error zero return";
   case 131:
    return "SSL error want read";
   case 130:
    return "SSL error want write";
   case 132:
    return "SSL error want connect";
   case 133:
    return "SSL error want accept";
   case 129:
    return "SSL error want X509 lookup";
   case 134:
    if (VAR_5 == 0)
    {
     if (VAR_4 == 0)
      return "EOF in SSL operation";
     else if (FUNC_1(VAR_4))
     {

      VAR_0->err = VAR_4;
      return FUNC_4(VAR_0);
     }
     else
      return "unknown SSL syscall error";
    }
    return "SSL error syscall";
   default:
    break;
  }
 }

 if (VAR_5 == 0)
 {

  if (FUNC_1(VAR_4))
  {

   VAR_0->err = VAR_4;
   return FUNC_4(VAR_0);
  }

  return "no SSL error";
 }

 VAR_2 = FUNC_0(VAR_5);

 if (((void*)0) != VAR_2)
  return VAR_2;

 FUNC_3(VAR_3, sizeof(VAR_3), "SSL error code %lu", VAR_5);

 return VAR_3;
}
