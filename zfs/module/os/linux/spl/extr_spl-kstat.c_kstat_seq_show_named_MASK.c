
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {char* c; int ul; int l; scalar_t__ ui64; scalar_t__ i64; int ui32; int i32; } ;
struct TYPE_7__ {int data_type; TYPE_1__ value; int name; } ;
typedef TYPE_2__ kstat_named_t ;
 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct seq_file *VAR_0, kstat_named_t *VAR_1)
{
 FUNC_3(VAR_0, "%-31s %-4d ", VAR_1->name, VAR_1->data_type);

 switch (VAR_1->data_type) {
  case 135:
   VAR_1->value.c[15] = '\0';
   FUNC_3(VAR_0, "%-16s", VAR_1->value.c);
   break;




  case 134:
   FUNC_3(VAR_0, "%d", VAR_1->value.i32);
   break;
  case 130:
   FUNC_3(VAR_0, "%u", VAR_1->value.ui32);
   break;
  case 133:
   FUNC_3(VAR_0, "%lld", (signed long long)VAR_1->value.i64);
   break;
  case 129:
   FUNC_3(VAR_0, "%llu",
       (unsigned long long)VAR_1->value.ui64);
   break;
  case 132:
   FUNC_3(VAR_0, "%ld", VAR_1->value.l);
   break;
  case 128:
   FUNC_3(VAR_0, "%lu", VAR_1->value.ul);
   break;
  case 131:
   FUNC_1(VAR_1)
    [FUNC_0(VAR_1)-1] = '\0';
   FUNC_3(VAR_0, "%s", FUNC_1(VAR_1));
   break;
  default:
   FUNC_2("Undefined kstat data type %d\n", VAR_1->data_type);
 }

 FUNC_3(VAR_0, "\n");

 return (0);
}
