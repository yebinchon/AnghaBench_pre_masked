
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct send_range {int type; int eos_marker; void* end_blkid; void* start_blkid; void* object; } ;
typedef enum type { ____Placeholder_type } type ;
typedef int boolean_t ;


 int VAR_0 ;
 struct send_range* FUNC_0 (int,int ) ;

__attribute__((used)) static struct send_range *
FUNC_1(enum type VAR_1, uint64_t VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, boolean_t VAR_5)
{
 struct send_range *VAR_6 = FUNC_0(sizeof (*VAR_6), VAR_0);
 VAR_6->type = VAR_1;
 VAR_6->object = VAR_2;
 VAR_6->start_blkid = VAR_3;
 VAR_6->end_blkid = VAR_4;
 VAR_6->eos_marker = VAR_5;
 return (VAR_6);
}
