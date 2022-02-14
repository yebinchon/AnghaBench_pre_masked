
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * nvs_ops; } ;
typedef TYPE_1__ nvstream_t ;
typedef int nvs_native_t ;
typedef int nvs_header_t ;
typedef int nvlist_t ;


 int FUNC_0 (TYPE_1__*,int *,char*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *,size_t*) ;

__attribute__((used)) static int
FUNC_3(nvstream_t *VAR_1, nvlist_t *VAR_2, char *VAR_3, size_t *VAR_4)
{
 nvs_native_t VAR_5;
 int VAR_6;

 VAR_1->nvs_ops = &VAR_0;

 if ((VAR_6 = FUNC_0(VAR_1, &VAR_5, VAR_3 + sizeof (nvs_header_t),
     *VAR_4 - sizeof (nvs_header_t))) != 0)
  return (VAR_6);

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4);

 FUNC_1(VAR_1);

 return (VAR_6);
}
