
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {struct TYPE_20__* next; } ;
struct TYPE_19__ {int body_len; TYPE_3__* headers; } ;
struct TYPE_18__ {size_t len; char const* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ HttpRequest ;
typedef TYPE_3__ HttpHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

const char *
FUNC_8(HttpRequest *VAR_3, size_t *VAR_4)
{

 StringInfoData VAR_5;
 HttpHeader *VAR_6;
 int VAR_7 = 0;
 bool VAR_8 = 0;

 FUNC_7(&VAR_5);

 FUNC_4(VAR_3, &VAR_5);
 FUNC_3(VAR_2, &VAR_5);

 FUNC_5(VAR_3, &VAR_5);
 FUNC_3(VAR_2, &VAR_5);

 FUNC_6(VAR_3, &VAR_5);
 FUNC_3(VAR_0, &VAR_5);
 FUNC_3(VAR_1, &VAR_5);

 VAR_6 = VAR_3->headers;

 while (VAR_6 != ((void*)0))
 {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 != -1)
  {

   if (VAR_7 != VAR_3->body_len)
   {
    return ((void*)0);
   }
   else
    VAR_8 = 1;
  }
  FUNC_1(VAR_6, &VAR_5);
  FUNC_3(VAR_0, &VAR_5);
  FUNC_3(VAR_1, &VAR_5);

  VAR_6 = VAR_6->next;
 }
 FUNC_3(VAR_0, &VAR_5);
 FUNC_3(VAR_1, &VAR_5);

 if (!VAR_8)
 {

  if (VAR_3->body_len != 0)
  {
   return ((void*)0);
  }
 }

 FUNC_2(VAR_3, &VAR_5);

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_5.len;
 return VAR_5.data;
}
