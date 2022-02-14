
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio {int dummy; } ;
struct TYPE_4__ {int dr_bio_count; int ** dr_bio; scalar_t__ dr_error; int dr_ref; } ;
typedef TYPE_1__ dio_request_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int,int ) ;

__attribute__((used)) static dio_request_t *
FUNC_2(int VAR_1)
{
 dio_request_t *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(sizeof (dio_request_t) +
     sizeof (struct bio *) * VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->dr_ref, 0);
  VAR_2->dr_bio_count = VAR_1;
  VAR_2->dr_error = 0;

  for (VAR_3 = 0; VAR_3 < VAR_2->dr_bio_count; VAR_3++)
   VAR_2->dr_bio[VAR_3] = ((void*)0);
 }

 return (VAR_2);
}
