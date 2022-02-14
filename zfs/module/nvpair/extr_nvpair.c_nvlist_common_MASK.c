
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nvs_op; scalar_t__ nvs_recursion; int * nvs_priv; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_10__ {int nvh_encoding; int nvh_endian; int nvh_reserved2; int nvh_reserved1; } ;
typedef TYPE_2__ nvs_header_t ;
typedef int nvpriv_t ;
struct TYPE_11__ {scalar_t__ nvl_priv; } ;
typedef TYPE_3__ nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (TYPE_1__*,TYPE_3__*,char*,size_t*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,char*,size_t*) ;

__attribute__((used)) static int
FUNC_2(nvlist_t *VAR_2, char *VAR_3, size_t *VAR_4, int VAR_5,
    int VAR_6)
{
 int VAR_7 = 0;
 nvstream_t VAR_8;
 int VAR_9;



 int VAR_10 = 0;

 nvs_header_t *VAR_11 = (void *)VAR_3;

 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0) ||
     (VAR_8.nvs_priv = (nvpriv_t *)(uintptr_t)VAR_2->nvl_priv) == ((void*)0))
  return (VAR_0);

 VAR_8.nvs_op = VAR_6;
 VAR_8.nvs_recursion = 0;






 switch (VAR_6) {
 case 131:
  if (VAR_3 == ((void*)0) || *VAR_4 < sizeof (nvs_header_t))
   return (VAR_0);

  VAR_11->nvh_encoding = VAR_5;
  VAR_11->nvh_endian = VAR_9 = VAR_10;
  VAR_11->nvh_reserved1 = 0;
  VAR_11->nvh_reserved2 = 0;
  break;

 case 132:
  if (VAR_3 == ((void*)0) || *VAR_4 < sizeof (nvs_header_t))
   return (VAR_0);


  VAR_5 = VAR_11->nvh_encoding;
  VAR_9 = VAR_11->nvh_endian;
  break;

 case 130:
  VAR_9 = VAR_10;




  *VAR_4 = sizeof (nvs_header_t);
  break;

 default:
  return (VAR_1);
 }




 switch (VAR_5) {
 case 129:




  if (VAR_9 != VAR_10)
   return (VAR_1);
  VAR_7 = FUNC_0(&VAR_8, VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  VAR_7 = FUNC_1(&VAR_8, VAR_2, VAR_3, VAR_4);
  break;
 default:
  VAR_7 = VAR_1;
  break;
 }

 return (VAR_7);
}
