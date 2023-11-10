# UE-ComboCounter

```cpp

template <float Delay, unsigned int MaxCount = 1024>
class ComboCounter{}

```


![ComboGif](https://github.com/hammerinformation/UE-ComboCounter/assets/51826786/55df6d79-1acd-4bbb-a352-9a408050427f)




`ComboCounter` is a C++ utility class designed to manage combo counters in a game. It allows you to set a delay for combo expiration and a maximum count for the combo. If the combo is not increased within the specified delay, it automatically resets.



## Usage

### Include the Header

```cpp
#include "ComboCounter.h"
```




```cpp

// Create a combo counter with a default delay of 0.5 seconds and a maximum count of 1024
Utility::ComboCounter<0.5f, 1024> MyComboCounter;


```

```cpp

// Increase the combo by 1
MyComboCounter.IncreaseCombo(GetWorld());


```


```cpp

// Increase the combo by 2 with a new delay of 1 second
MyComboCounter.IncreaseCombo(GetWorld(), 2, 1.0f);

```



```cpp

// Reset the combo to 0
MyComboCounter.ResetCombo();

```

```cpp

// Get the current combo count
unsigned int CurrentCombo = MyComboCounter.GetCombo();


```
