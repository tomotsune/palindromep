//
// Created by tomot on 2020/10/11.
//

#ifndef A_EXP4_FORWARD_QUEUE_H
#define A_EXP4_FORWARD_QUEUE_H

#include "../a_exp_3/CirLinkList.h"

template<typename T>
class forward_queue
        : public CirLinkList<T> {
public:

    void push(const T& val);
    void pop();
};

template<typename T>
void forward_queue<T>::push(const T &val) {
    CirLinkList<T>::push_end(val);
}

template<typename T>
void forward_queue<T>::pop() {
    CirLinkList<T>::removeByPos(0);
}


#endif //A_EXP4_FORWARD_QUEUE_H
