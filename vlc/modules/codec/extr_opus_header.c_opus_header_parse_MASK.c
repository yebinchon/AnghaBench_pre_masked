
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {unsigned char version; unsigned char channels; short gain; unsigned char channel_mapping; unsigned char nb_streams; unsigned char nb_coupled; unsigned char* stream_map; int input_sample_rate; scalar_t__ preskip; } ;
struct TYPE_7__ {unsigned char const* data; int maxlen; int pos; } ;
typedef TYPE_1__ ROPacket ;
typedef TYPE_2__ OpusHeader ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

int FUNC_4(const unsigned char *VAR_0, int VAR_1, OpusHeader *VAR_2)
{
    char VAR_3[9];
    ROPacket VAR_4;
    unsigned char VAR_5;
    uint16_t VAR_6;

    VAR_4.data = VAR_0;
    VAR_4.maxlen = VAR_1;
    VAR_4.pos = 0;
    VAR_3[8] = 0;
    if (VAR_1<19)return 0;
    FUNC_1(&VAR_4, (unsigned char*)VAR_3, 8);
    if (FUNC_0(VAR_3, "OpusHead", 8)!=0)
        return 0;

    if (!FUNC_1(&VAR_4, &VAR_5, 1))
        return 0;
    VAR_2->version = VAR_5;
    if((VAR_2->version&240) != 0)
        return 0;

    if (!FUNC_1(&VAR_4, &VAR_5, 1))
        return 0;
    VAR_2->channels = VAR_5;
    if (VAR_2->channels == 0)
        return 0;

    if (!FUNC_2(&VAR_4, &VAR_6))
        return 0;
    VAR_2->preskip = VAR_6;

    if (!FUNC_3(&VAR_4, &VAR_2->input_sample_rate))
        return 0;

    if (!FUNC_2(&VAR_4, &VAR_6))
        return 0;
    VAR_2->gain = (short)VAR_6;

    if (!FUNC_1(&VAR_4, &VAR_5, 1))
        return 0;
    VAR_2->channel_mapping = VAR_5;

    if (VAR_2->channel_mapping != 0)
    {
        if (!FUNC_1(&VAR_4, &VAR_5, 1))
            return 0;

        if (VAR_5<1)
            return 0;
        VAR_2->nb_streams = VAR_5;

        if (!FUNC_1(&VAR_4, &VAR_5, 1))
            return 0;

        if (VAR_5>VAR_2->nb_streams || (VAR_5+VAR_2->nb_streams)>255)
            return 0;
        VAR_2->nb_coupled = VAR_5;


        for (int VAR_7=0;VAR_7<VAR_2->channels;VAR_7++)
        {
            if (!FUNC_1(&VAR_4, &VAR_2->stream_map[VAR_7], 1))
                return 0;
            if (VAR_2->stream_map[VAR_7]>(VAR_2->nb_streams+VAR_2->nb_coupled) && VAR_2->stream_map[VAR_7]!=255)
                return 0;
        }
    } else {
        if(VAR_2->channels>2)
            return 0;
        VAR_2->nb_streams = 1;
        VAR_2->nb_coupled = VAR_2->channels>1;
        VAR_2->stream_map[0]=0;
        VAR_2->stream_map[1]=1;
    }


    if ((VAR_2->version==0 || VAR_2->version==1) && VAR_4.pos != VAR_1)
        return 0;
    return 1;
}
