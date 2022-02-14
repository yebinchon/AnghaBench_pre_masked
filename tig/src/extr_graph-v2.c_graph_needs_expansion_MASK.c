
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ size; } ;
struct graph_v2 {scalar_t__ position; TYPE_2__ row; TYPE_1__ parents; } ;



__attribute__((used)) static bool
FUNC_0(struct graph_v2 *VAR_0)
{
 return VAR_0->position + VAR_0->parents.size > VAR_0->row.size;
}
