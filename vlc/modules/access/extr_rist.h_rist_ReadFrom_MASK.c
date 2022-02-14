
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;




 int VAR_0 ;
 int FUNC_0 (int,void*,size_t,int ) ;
 int FUNC_1 (int,void*,size_t,int ,struct sockaddr*,int *) ;

__attribute__((used)) static inline ssize_t FUNC_2(int VAR_1, void *VAR_2, size_t VAR_3, struct sockaddr *VAR_4,
    socklen_t *VAR_5)
{
    ssize_t VAR_6 = -1;

    if (VAR_4 == ((void*)0))
        VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, 0);
    else
        VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, 0, VAR_4, VAR_5);

    if (VAR_6 == -1)
    {
        switch (VAR_0)
        {
        case 129:
        case 128:

            if (VAR_4 == ((void*)0))
                VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, 0);
            else
                VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, 0, VAR_4, VAR_5);
        default:
            break;
        }
    }
    return VAR_6;
}
