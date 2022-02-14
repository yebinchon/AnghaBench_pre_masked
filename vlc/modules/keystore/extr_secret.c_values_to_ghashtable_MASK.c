
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int GHashTable ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static GHashTable *
FUNC_2(const char *const VAR_4[VAR_0])
{
    GHashTable *VAR_5 = FUNC_1(VAR_2, VAR_1,
                                               ((void*)0), ((void*)0));
    if (!VAR_5)
        return ((void*)0);
    for (unsigned int VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
        if (VAR_4[VAR_6])
            FUNC_0(VAR_5, (gpointer) VAR_3[VAR_6],
                                (gpointer) VAR_4[VAR_6]);
    }
    return VAR_5;
}
