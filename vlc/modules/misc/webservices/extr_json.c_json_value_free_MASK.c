
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* ptr; } ;
struct TYPE_9__ {size_t length; TYPE_5__* values; } ;
struct TYPE_8__ {size_t length; TYPE_5__** values; } ;
struct TYPE_11__ {TYPE_3__ string; TYPE_2__ object; TYPE_1__ array; } ;
struct TYPE_12__ {int type; struct TYPE_12__* parent; TYPE_4__ u; struct TYPE_12__* value; } ;
typedef TYPE_5__ json_value ;


 int FUNC_0 (TYPE_5__*) ;




void FUNC_1 (json_value * VAR_0)
{
   json_value * VAR_1;

   if (!VAR_0)
      return;

   VAR_0->parent = 0;

   while (VAR_0)
   {
      switch (VAR_0->type)
      {
         case 130:

            if (!VAR_0->u.array.length)
            {
               FUNC_0 (*VAR_0->u.array.values);
               break;
            }

            VAR_0 = VAR_0->u.array.values [-- VAR_0->u.array.length];
            continue;

         case 129:

            if (!VAR_0->u.object.length)
            {
               FUNC_0 (VAR_0->u.object.values);
               break;
            }

            VAR_0 = VAR_0->u.object.values [-- VAR_0->u.object.length].value;
            continue;

         case 128:

            FUNC_0 (VAR_0->u.string.ptr);
            break;

         default:
            break;
      };

      VAR_1 = VAR_0;
      VAR_0 = VAR_0->parent;
      FUNC_0 (VAR_1);
   }
}
