
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio {int dummy; } ;
struct TYPE_4__ {int dr_bio_count; scalar_t__* dr_bio; } ;
typedef TYPE_1__ dio_request_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(dio_request_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->dr_bio_count; VAR_1++)
  if (VAR_0->dr_bio[VAR_1])
   FUNC_0(VAR_0->dr_bio[VAR_1]);

 FUNC_1(VAR_0, sizeof (dio_request_t) +
     sizeof (struct bio *) * VAR_0->dr_bio_count);
}
