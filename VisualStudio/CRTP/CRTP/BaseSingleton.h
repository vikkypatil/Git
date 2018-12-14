#pragma once
// Curiously recurring template pattern
template <typename T>
class BaseSingleton
{
protected:
	BaseSingleton() {

	}
public:
	BaseSingleton(const BaseSingleton&) = delete;
	BaseSingleton & operator=(const BaseSingleton&) = delete;
	virtual ~BaseSingleton() = default;
	static T & getInstance() {
		static T instance;
		return instance;
	}
};



