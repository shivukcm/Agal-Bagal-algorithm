# Agal Bagal Sort

A novel comparison-based sorting algorithm that works by detecting and resolving **peaks**, **valleys**, and **mixed** patterns in an array until the entire sequence is sorted.

## How It Works

The algorithm repeatedly scans the array looking for three types of local disorder:

| Pattern | Condition | Action |
|---------|-----------|--------|
| **Peak** | `a[i] > a[i-1]` and `a[i] > a[i+1]` | Pushes the larger element rightward |
| **Valley** | `a[i] < a[i-1]` and `a[i] < a[i+1]` | Pushes the smaller element leftward |
| **Mixed** | `a[i] < a[i-1]` and `a[i] > a[i+1]` | Swaps neighbors if out of order |

Each pass examines consecutive triplets `(a[i-1], a[i], a[i+1])` and applies targeted swaps to flatten the disorder. The process repeats until a full pass produces no changes, guaranteeing a sorted result.

## Build & Run

```bash
g++ agal_bagal.cpp -o agal_bagal
./agal_bagal
```

### Example Output

```
1 1 2 4 5 23 23 24 34 41 43 44 52 54 63 75 235 254 345 345 345 353 436 563 566 3463 5465 6356 23123
```

## Complexity

| Metric | Value |
|--------|-------|
| **Time (worst case)** | O(n²) |
| **Space** | O(1) — in-place sorting |
| **Stable** | No |

## File Structure

```
sorting/
├── agal_bagal.cpp   # Algorithm implementation + driver
└── README.md
```

## License

Free to use for educational purposes.
