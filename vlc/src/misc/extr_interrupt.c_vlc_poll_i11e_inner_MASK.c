
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_interrupt_t ;
typedef int uint64_t ;
struct pollfd {int fd; scalar_t__ revents; int events; } ;
typedef int dummy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pollfd*,unsigned int,int) ;
 int FUNC_2 (int,int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int*) ;
 scalar_t__ FUNC_8 (int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct pollfd *restrict VAR_7, unsigned VAR_8,
                               int VAR_9, vlc_interrupt_t *VAR_10,
                               struct pollfd *restrict VAR_11)
{
    int VAR_12[2];
    int VAR_13 = -1;
    int VAR_14;
    if (FUNC_8(VAR_12))
    {
        FUNC_11();
        VAR_4 = VAR_2;
        return -1;
    }

    for (unsigned VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
    {
        VAR_11[VAR_15].fd = VAR_7[VAR_15].fd;
        VAR_11[VAR_15].events = VAR_7[VAR_15].events;
    }
    VAR_11[VAR_8].fd = VAR_12[0];
    VAR_11[VAR_8].events = VAR_3;

    FUNC_7(VAR_10, VAR_6, VAR_12);

    FUNC_4(VAR_5, VAR_10);
    VAR_13 = FUNC_1(VAR_11, VAR_8 + 1, VAR_9);

    for (unsigned VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
        VAR_7[VAR_16].revents = VAR_11[VAR_16].revents;

    if (VAR_13 > 0 && VAR_11[VAR_8].revents)
    {
        uint64_t VAR_17;

        FUNC_2(VAR_12[0], &VAR_17, sizeof (VAR_17));
        VAR_13--;
    }
    FUNC_3();

    if (FUNC_6(VAR_10))
    {
        VAR_4 = VAR_1;
        VAR_13 = -1;
    }

    VAR_14 = FUNC_10();
    if (VAR_12[1] != VAR_12[0])
        FUNC_5(VAR_12[1]);
    FUNC_5(VAR_12[0]);
    FUNC_9(VAR_14);
    return VAR_13;
}
