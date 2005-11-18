
/*
 
Copyright (c) 2005, Simon Howard
All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions 
are met:

 * Redistributions of source code must retain the above copyright 
   notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright 
   notice, this list of conditions and the following disclaimer in 
   the documentation and/or other materials provided with the 
   distribution.
 * Neither the name of the C Algorithms project nor the names of its 
   contributors may be used to endorse or promote products derived 
   from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.

 
*/

/* Double-ended queues */

#ifndef ALGORITHM_QUEUE_H
#define ALGORITHM_QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * A double-ended queue.
 */
    
typedef struct _Queue Queue;

/**
 * Create a new double-ended queue
 *
 * @return           A new queue
 */

Queue *queue_new(void);

/**
 * Destroy a queue
 *
 * @param queue      The queue to destroy
 */

void queue_free(Queue *queue);

/**
 * Add some data to the head of a queue
 *
 * @param queue      The queue 
 * @param data       The data to add
 */

void queue_push_head(Queue *queue, void *data);

/**
 * Remove some data from the head of a queue
 *
 * @param queue      The queue
 * @return           Data at the head of the queue, or NULL if the 
 *                   queue is empty
 */

void *queue_pop_head(Queue *queue);

/**
 * Read some data from the head of queue, without removing it from
 * the queue
 *
 * @param queue      The queue
 * @return           Data at the head of the queue, or NULL if the 
 *                   queue is empty
 */

void *queue_peek_head(Queue *queue);

/**
 * Add some data to the tail of a queue
 *
 * @param queue      The queue 
 * @param data       The data to add
 */

void queue_push_tail(Queue *queue, void *data);

/**
 * Remove some data from the tail of a queue
 *
 * @param queue      The queue
 * @return           Data at the head of the queue, or NULL if the 
 *                   queue is empty
 */

void *queue_pop_tail(Queue *queue);

/**
 * Read some data from the tail of queue, without removing it from
 * the queue
 *
 * @param queue      The queue
 * @return           Data at the tail of the queue, or NULL if the 
 *                   queue is empty
 */

void *queue_peek_tail(Queue *queue);

/**
 * Queries if any data is currently in a queue
 *
 * @param queue      The queue
 * @return           Zero if the queue is not empty, non-zero if the queue
 *                   is empty
 */

int queue_empty(Queue *queue);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef ALGORITHM_QUEUE_H */

