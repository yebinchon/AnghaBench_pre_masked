
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zi_start; unsigned long long zi_end; int zi_object; int zi_level; } ;
typedef TYPE_1__ zinject_record_t ;
typedef int err_type_t ;
typedef int dnode_phys_t ;




 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 void* FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2(err_type_t VAR_1, int VAR_2, char *VAR_3,
    zinject_record_t *VAR_4)
{



 if (VAR_3 == ((void*)0)) {





  VAR_4->zi_start = 0;
  VAR_4->zi_end = -1ULL;
 } else {
  char *VAR_5;


  VAR_4->zi_start = FUNC_1(VAR_3, &VAR_5, 10);


  if (*VAR_5 == '\0')
   VAR_4->zi_end = VAR_4->zi_start + 1;
  else if (*VAR_5 == ',')
   VAR_4->zi_end = FUNC_1(VAR_5 + 1, &VAR_5, 10);

  if (*VAR_5 != '\0') {
   (void) FUNC_0(VAR_0, "invalid range '%s': must be "
       "a numeric range of the form 'start[,end]'\n",
       VAR_3);
   return (-1);
  }
 }

 switch (VAR_1) {
 default:
  break;
 case 129:
  break;

 case 128:






  if (VAR_3 != ((void*)0)) {
   (void) FUNC_0(VAR_0, "range cannot be specified when "
       "type is 'dnode'\n");
   return (-1);
  }

  VAR_4->zi_start = VAR_4->zi_object * sizeof (dnode_phys_t);
  VAR_4->zi_end = VAR_4->zi_start + sizeof (dnode_phys_t);
  VAR_4->zi_object = 0;
  break;
 }

 VAR_4->zi_level = VAR_2;

 return (0);
}
