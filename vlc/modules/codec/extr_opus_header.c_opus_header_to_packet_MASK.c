
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned char channels; unsigned char channel_mapping; unsigned char nb_streams; unsigned char nb_coupled; unsigned char* stream_map; int gain; int input_sample_rate; int preskip; } ;
struct TYPE_7__ {unsigned char* data; int maxlen; int pos; } ;
typedef TYPE_1__ Packet ;
typedef TYPE_2__ OpusHeader ;


 int FUNC_0 (TYPE_1__*,unsigned char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(const OpusHeader *VAR_0, unsigned char *VAR_1, int VAR_2)
{
    Packet VAR_3;
    unsigned char VAR_4;

    VAR_3.data = VAR_1;
    VAR_3.maxlen = VAR_2;
    VAR_3.pos = 0;
    if (VAR_2<19)return 0;
    if (!FUNC_0(&VAR_3, (const unsigned char*)"OpusHead", 8))
        return 0;

    VAR_4 = 1;
    if (!FUNC_0(&VAR_3, &VAR_4, 1))
        return 0;

    VAR_4 = VAR_0->channels;
    if (!FUNC_0(&VAR_3, &VAR_4, 1))
        return 0;

    if (!FUNC_1(&VAR_3, VAR_0->preskip))
        return 0;

    if (!FUNC_2(&VAR_3, VAR_0->input_sample_rate))
        return 0;

    if (!FUNC_1(&VAR_3, VAR_0->gain))
        return 0;

    VAR_4 = VAR_0->channel_mapping;
    if (!FUNC_0(&VAR_3, &VAR_4, 1))
        return 0;

    if (VAR_0->channel_mapping != 0)
    {
        VAR_4 = VAR_0->nb_streams;
        if (!FUNC_0(&VAR_3, &VAR_4, 1))
            return 0;

        VAR_4 = VAR_0->nb_coupled;
        if (!FUNC_0(&VAR_3, &VAR_4, 1))
            return 0;


        for (int VAR_5=0;VAR_5<VAR_0->channels;VAR_5++)
        {
            if (!FUNC_0(&VAR_3, &VAR_0->stream_map[VAR_5], 1))
                return 0;
        }
    }

    return VAR_3.pos;
}
