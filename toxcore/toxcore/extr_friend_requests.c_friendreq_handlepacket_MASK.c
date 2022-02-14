
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int message ;
struct TYPE_4__ {scalar_t__ handle_friendrequest_isset; scalar_t__ (* filter_function ) (scalar_t__ const*,int ) ;int handle_friendrequest_userdata; int handle_friendrequest_object; int (* handle_friendrequest ) (int ,scalar_t__ const*,scalar_t__*,int,int ) ;int filter_function_userdata; int nospam; } ;
typedef TYPE_1__ Friend_Requests ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__ const*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,int *,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__ const*) ;
 scalar_t__ FUNC_4 (scalar_t__ const*,int ) ;
 int FUNC_5 (int ,scalar_t__ const*,scalar_t__*,int,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    Friend_Requests *VAR_5 = VAR_1;

    if (VAR_4 <= 1 + sizeof(VAR_5->nospam) || VAR_4 > VAR_0)
        return 1;

    ++VAR_3;
    --VAR_4;

    if (VAR_5->handle_friendrequest_isset == 0)
        return 1;

    if (FUNC_3(VAR_5, VAR_2))
        return 1;

    if (FUNC_1(VAR_3, &VAR_5->nospam, sizeof(VAR_5->nospam)) != 0)
        return 1;

    if (VAR_5->filter_function)
        if ((*VAR_5->filter_function)(VAR_2, VAR_5->filter_function_userdata) != 0)
            return 1;

    FUNC_0(VAR_5, VAR_2);

    uint32_t VAR_6 = VAR_4 - sizeof(VAR_5->nospam);
    uint8_t VAR_7[VAR_6 + 1];
    FUNC_2(VAR_7, VAR_3 + sizeof(VAR_5->nospam), VAR_6);
    VAR_7[sizeof(VAR_7) - 1] = 0;

    (*VAR_5->handle_friendrequest)(VAR_5->handle_friendrequest_object, VAR_2, VAR_7, VAR_6,
                                VAR_5->handle_friendrequest_userdata);
    return 0;
}
