
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_list {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct bio_list* bio_list; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct bio*) ;

__attribute__((used)) static inline void
FUNC_1(struct bio *VAR_1)
{
 struct bio_list *VAR_2 = VAR_0->bio_list;
 VAR_0->bio_list = ((void*)0);
 FUNC_0(VAR_1);
 VAR_0->bio_list = VAR_2;
}
