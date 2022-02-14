
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int sizearray; int * array; int * metatable; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int (* ObjectRelationshipReport ) (TYPE_1__*,int *,int,int *,unsigned int,int *) ;
typedef int Node ;


 int * FUNC_0 (int const*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int *) ;
 unsigned int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 unsigned int FUNC_12 (int const*) ;

__attribute__((used)) static void FUNC_13(Table *VAR_0, ObjectRelationshipReport VAR_1)
{
 Node *VAR_2, *VAR_3 = FUNC_4(VAR_0);
    unsigned int VAR_4;

 if (VAR_0->metatable != ((void*)0))
 {
  VAR_1(VAR_0, VAR_0->metatable, 4, ((void*)0), 0, ((void*)0));
 }

    for (VAR_4 = 0; VAR_4 < VAR_0->sizearray; VAR_4++)
 {
  const TValue *VAR_5 = &VAR_0->array[VAR_4];
  if (FUNC_11(VAR_5))
  {
      VAR_1(VAR_0, FUNC_0(VAR_5), 2, ((void*)0), VAR_4 + 1, ((void*)0));
  }
 }

    for (VAR_2 = FUNC_3(VAR_0, 0); VAR_2 < VAR_3; VAR_2++)
 {
        if (!FUNC_8(FUNC_5(VAR_2)))
        {
            const TValue *VAR_6 = FUNC_2(VAR_2);
   if (FUNC_11(VAR_6))
   {
    VAR_1(VAR_0, FUNC_0(VAR_6), 3, ((void*)0), 0, ((void*)0));
   }
            const TValue *VAR_7 = FUNC_5(VAR_2);
   if (FUNC_11(VAR_7))
   {
    if (FUNC_10(VAR_6))
    {
     VAR_1(VAR_0, FUNC_0(VAR_7), 1, FUNC_1(FUNC_7(VAR_6)), 0, ((void*)0));
    }
    else if(FUNC_9(VAR_6))
    {
     VAR_1(VAR_0, FUNC_0(VAR_7), 2, ((void*)0), FUNC_6(VAR_6), ((void*)0));
    }
    else
    {

     VAR_1(VAR_0, FUNC_0(VAR_7), 1, ((void*)0), FUNC_12(VAR_6), ((void*)0));
    }
   }
  }
    }
}
