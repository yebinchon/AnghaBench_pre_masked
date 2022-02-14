
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int ssize_t ;
struct TYPE_7__ {scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct stat*) ;
 TYPE_1__* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (void*,size_t) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 void* FUNC_8 (int *,size_t,int,int,int,int ) ;
 int FUNC_9 (int,scalar_t__,size_t,size_t) ;
 int FUNC_10 () ;

block_t *FUNC_11(int VAR_10, bool VAR_11)
{
    size_t VAR_12;
    struct stat VAR_13;


    if (FUNC_7 (VAR_10, &VAR_13))
        return ((void*)0);







    if (FUNC_0 (VAR_13.st_mode))
    {
        VAR_9 = VAR_0;
        return ((void*)0);
    }
    if (!FUNC_1 (VAR_13.st_mode) && !(0))
    {
        VAR_9 = VAR_2;
        return ((void*)0);
    }


    if ((uintmax_t)VAR_13.st_size >= VAR_8)
    {
        VAR_9 = VAR_1;
        return ((void*)0);
    }
    VAR_12 = (size_t)VAR_13.st_size;
    (void) VAR_11;



    block_t *VAR_14 = FUNC_3 (VAR_12);
    if (VAR_14 == ((void*)0))
        return ((void*)0);
    FUNC_5 (VAR_14);

    for (size_t VAR_15 = 0; VAR_15 < VAR_12;)
    {
        ssize_t VAR_16 = FUNC_9 (VAR_10, VAR_14->p_buffer + VAR_15, VAR_12 - VAR_15, VAR_15);
        if (VAR_16 == -1)
        {
            FUNC_4 (VAR_14);
            VAR_14 = ((void*)0);
            break;
        }
        VAR_15 += VAR_16;
    }
    FUNC_10 ();
    return VAR_14;
}
