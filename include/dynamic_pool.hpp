#pragma once

#include <cstddef>
#include <memory>



namespace MemPool::Dynamic {

    /**
     * @brief: An implementation of a dynamically growing memory pool that allocates memory for an object of an 
     *         arbitrary type.
     * 
     * @requirements: 
     * 
     * @behavior:
     * 1. LIFO: (Doubly-Linked List)
     *
     *
     *
     */


    // MemPool Structure:
    // 1. Node : ObjectT obj; Node* next

    template <typename ObjectT>
    class MemPool final {

        struct Node 
        {
            alignas(ObjectT) std::byte raw_storage[sizeof(ObjectT)];

            Node* next{nullptr};
            Node* prev{nullptr};
        }


    };





} // ns Mempool::Dynamic