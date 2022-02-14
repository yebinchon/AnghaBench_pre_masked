
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_mutex_t ;
typedef int vlc_cond_t ;
typedef unsigned int UInt32 ;
struct TYPE_3__ {scalar_t__ mSelector; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef int AudioObjectID ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static OSStatus
FUNC_6(AudioObjectID VAR_2, UInt32 VAR_3,
               const AudioObjectPropertyAddress VAR_4[],
               void *VAR_5)
{
    OSStatus VAR_6 = VAR_1;
    struct { vlc_mutex_t lock; vlc_cond_t cond; } * VAR_7 = VAR_5;

    FUNC_0(VAR_2);

    for (unsigned int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    {
        if (VAR_4[VAR_8].mSelector == VAR_0)
        {
            int VAR_9 = FUNC_5();
            FUNC_2(&VAR_7->lock);
            FUNC_1(&VAR_7->cond);
            FUNC_3(&VAR_7->lock);
            FUNC_4(VAR_9);
            break;
        }
    }
    return VAR_6;
}
