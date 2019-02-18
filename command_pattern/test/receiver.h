#ifndef __RECEIVER_H
#define __RECEIVER_H

typedef struct receiver_t{
    
    void (*action)();
}receiver;

receiver *new_receiver();
void delete_receiver(receiver *precv);



#endif


