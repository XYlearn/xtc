package xtc.lang.cpp;

import com.google.gson.annotations.SerializedName;

import java.util.*;

/**
 * A Map from key to its corresponding element list.
 * @param <K> The key type of map
 * @param <V> The element type of value list
 */
public class ListMap<K, V> {
  @SerializedName("map")
  protected Map<K, Collection<V>> internMap = new HashMap<>();

  /**
   * add a key-value pair to ListMap.
   * @param k key.
   * @param v value.
   */
  public void add(K k, V v) {
    if (internMap.containsKey(k)) {
      internMap.get(k).add(v);
    } else {
      Collection<V> ts = new HashSet<>();
      ts.add(v);
      internMap.put(k, ts);
    }
  }

  /**
   * Merge another ListMap to this ListMap.
   * @param another Another ListMap to merge with.
   */
  public void addAll(ListMap<K, V> another) {
    for (Map.Entry<K, Collection<V>> e: another.internMap.entrySet()) {
      K k = e.getKey();
      Collection<V> ts = e.getValue();
      if (internMap.containsKey(e.getKey())) {
        internMap.get(k).addAll(ts);
      } else {
        internMap.put(k, ts);
      }
    }
  }

  /**
   * Get list of values under given key.
   * @param k key.
   * @return Collection of values under the key.
   */
  public Collection<V> get(K k) {
    return internMap.get(k);
  }

  /**
   * Remove an element of value from specified key
   * @param k
   * @param v
   * @return
   */
  public boolean remove(K k, V v) {
    return get(k).remove(v);
  }



  /**
   * Get enties of key and coresponding value lists.
   * @return enties of key and coresponding value lists.
   */
  public Set<Map.Entry<K, Collection<V>>> entries() {
    return internMap.entrySet();
  }

  /**
   * Get set of keys.
   * @return Set of keys.
   */
  public Set<K> keySet() {
    return internMap.keySet();
  }

  /**
   * Collect all elements of all keys, and ignore the key values.
   * @return A collection contains all elements of ListMap.
   */
  public Collection<V> collect() {
    Collection<Collection<V>> vals = internMap.values();
    int length = 0;
    for (Collection<V> lst: vals) {
      length += lst.size();
    }
    Collection<V> result = new HashSet<>(length);
    internMap.values().forEach(lst -> result.addAll(lst));
    return result;
  }

  public boolean isEmpty() {
    return internMap.isEmpty();
  }
}
