#pragma once

class IQueue {
    public:
        virtual void insert(const int&) = 0;
        virtual int remove() = 0;
        virtual int front() const = 0;
        virtual int rear() const = 0;
	virtual ~IQueue() {}
};

