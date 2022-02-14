
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_worker {int threads; int nthreads; int lock; } ;
struct background_thread {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct background_thread* FUNC_0 (struct background_worker*) ;
 int FUNC_1 (struct background_thread*) ;
 scalar_t__ FUNC_2 (int *,int ,struct background_thread*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct background_worker *VAR_2)
{
    FUNC_4(&VAR_2->lock);

    struct background_thread *VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3)
        return 0;

    if (FUNC_2(((void*)0), VAR_0, VAR_3, VAR_1))
    {
        FUNC_1(VAR_3);
        return 0;
    }
    VAR_2->nthreads++;
    FUNC_3(&VAR_3->node, &VAR_2->threads);

    return 1;
}
