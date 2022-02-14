
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zi_guid; char* zi_func; scalar_t__ zi_cmd; } ;
typedef TYPE_1__ zinject_record_t ;
typedef int u_longlong_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, const char *VAR_2, zinject_record_t *VAR_3,
    void *VAR_4)
{
 int *VAR_5 = VAR_4;

 if (VAR_3->zi_guid == 0 || VAR_3->zi_func[0] != '\0')
  return (0);

 if (VAR_3->zi_cmd == VAR_0)
  return (0);

 if (*VAR_5 == 0) {
  (void) FUNC_0("%3s  %-15s  %s\n", "ID", "POOL", "GUID");
  (void) FUNC_0("---  ---------------  ----------------\n");
 }

 *VAR_5 += 1;

 (void) FUNC_0("%3d  %-15s  %llx\n", VAR_1, VAR_2,
     (u_longlong_t)VAR_3->zi_guid);

 return (0);
}
